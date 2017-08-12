// you can use includes, for example:
#include <algorithm>
#include <stdlib.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    vector<bool> check(A.size());
    for(auto i : A){
        if(i > 0 && i <= A.size()){
            check[i - 1] = true;    
        }
    }
    for(auto j : check){
        if(!j)
            return 0;
    }
    return 1;
}
