
class LRUCache : public Cache{
    protected:
    void insertNode(Node *node);
    void deleteNode(Node *node);
    public:
    LRUCache(int cap){
        cp = cap;
        tail = NULL;
        head = NULL;
    };
    void set(int key, int value);
    int get(int key);
    ~LRUCache();
};

LRUCache::~LRUCache(){
    while(head){
        auto node = head;
        head = head->next;
        delete node;
    }
}

void LRUCache::deleteNode(Node *node){
    if(tail == node)
        tail = node->prev;
    if(head == node)
        head = node->next;
    if(node->next != NULL){
        node->next->prev = node->prev;
    }
    if(node->prev != NULL){
        node->prev->next = node->next;
    }
    node->prev = NULL;
    node->next = NULL;
    mp.erase(node->key);
}

void LRUCache::insertNode(Node *node){
    node->prev = NULL;
    node->next = head;
    if(tail == NULL)
        tail = node;
    head = node;
}

void LRUCache::set(int key, int value){
    if(mp.count(key)){
        Node *node = mp[key];
        node->value = value;// When doing this, I didn't understood the value could be updated
        deleteNode(node);
        insertNode(node);
        mp.insert(make_pair(key, node));
    }else{
        if(mp.size() < cp){
            Node *node = new Node(key, value);
            insertNode(node);
            mp.insert(make_pair(key, node));
        }else{
            Node *node = new Node(key, value);
            insertNode(node);
            deleteNode(tail);
            mp.insert(make_pair(key, node));
        }
    }
}

int LRUCache::get(int key){
    if(mp.count(key)){
        return mp[key]->value;
    }else{
        return -1;
    }
}