template<class T>
class AddElements{
    private:
        T element;
    public:
        AddElements(T arg){
            element = arg;
        }
        T add(T arg1){
            return arg1 + element;
        }
};

template<>
class AddElements<string>{
    string element;
    public:
        AddElements(string arg){
            element = arg;
        }
        string concatenate(string arg){
            return element + arg;
        }
};
