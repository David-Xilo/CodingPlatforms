// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;

char nestedChar(char c){
    // only like this with the guarantee there is no other char, a bit sloppy
    if(c == '(') return ')';
    if(c == '[') return ']';
    return '}';
}

int solution(string &S) {
    stack<char> openingChars;
    for(char& c : S){
        if(c == '(' || c == '[' || c == '{') {
            openingChars.push(c);
        } else {
            if(openingChars.empty()) return 0;
            if( c != nestedChar(openingChars.top())) return 0;
            openingChars.pop();
        }
    }
    if(!openingChars.empty())
        return 0;
    return 1;
}