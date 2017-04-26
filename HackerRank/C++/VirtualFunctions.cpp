
class Person{
    public:
    
    int cur_id;
    int age;
    char name[100];
    virtual void getdata() = 0;
    virtual void putdata(){
        cout << name <<  " ";
        cout << age <<  " ";
    };
};

class Professor : public Person{
    public:
    static int idcount;
    int publications;
    Professor(){
        cur_id = idcount++;
    }
    void getdata(){
        cin >> name;
        cin >> age;
        cin >> publications;
        //scanf("%s %d %d", name, &age, &publications);
    }
    void putdata(){
        Person::putdata();
        cout << publications <<  " ";
        cout << cur_id << endl;
    }
};

class Student : public Person{
    public:
    int marks[6];
    static int idcount;
    Student(){
        cur_id = idcount++;
    }
    void getdata(){
        cin >> name;
        cin >> age;
        cin >> marks[0];
        cin >> marks[1];
        cin >> marks[2];
        cin >> marks[3];
        cin >> marks[4];
        cin >> marks[5];
        //scanf("%s %d %d %d %d %d %d %d", name, &age, &marks[0], &marks[1], &marks[2], &marks[3], &marks[4], &marks[5]);
    }
    void putdata(){
        Person::putdata();
        int sum = 0;
        for(int i = 0 ; i < 6; ++ i)
            sum += marks[i];
        cout << sum <<  " ";
        cout << cur_id << endl;
    }
};

int Student::idcount = 1;
int Professor::idcount = 1;
