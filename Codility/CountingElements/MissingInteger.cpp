// you can use includes, for example:
#include <algorithm>
#include <stdlib.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    vector<bool> B(A.size(), true);
    int house = 1;
    for(auto i : A){
        if(i <= A.size() && i > 0){
            B[i - 1] = false; 
        }
        while(!B[house - 1]){
            ++house;
        }
    }
    return house;
}
