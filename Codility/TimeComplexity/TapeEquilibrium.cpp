// you can use includes, for example:
// #include <algorithm>
#include <stdlib.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;

// 100% 
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int N = A.size();
    int sumLR[N];
    int sumRL[N];
    int sumlr = 0, sumrl = 0;
    
    // accumulates the sums of the values, iterating left to right
    sumLR[0] = 0;
    for(int i = 1; i < N; ++i){
        sumlr += A[i-1];
        sumLR[i] = sumlr;
    }
    
    // accumulates the sums of the values, iterating right to left
    for(int j = N-1; j > 0; --j){
        sumrl += A[j];
        sumRL[j] = sumrl;
    }
    
    // checks the difference between the accumulated sums, and keeps track of
    // the smallest difference
    int diff = abs(sumLR[1] - sumRL[1]);
    for(int k = 2; k < N; ++k){
        int newdiff = abs(sumLR[k] - sumRL[k]);
        if(diff > newdiff){
            diff = newdiff;
        }
    }
    
    return diff;
}
