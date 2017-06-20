// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    // XORing 2 equal numbers will give a result of 0
    // so, XORing every number will give as result only
    // the number that has no pair
    int sol = 0;
    for(auto i : A){
        sol ^= i;    
    }
    return sol;
}
