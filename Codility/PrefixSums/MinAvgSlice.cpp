// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int B[A.size()];
    int C[A.size()];
    B[A.size() - 2] = A[A.size() - 2] + A[A.size() - 1];
    for(auto i = 0; i < A.size() - 2; ++i){
        B[i] = A[i+1] + A[i];
        C[i] = A[i+2] + B[i];
    }
    double minim = B[0] / 2;
    int ind = 0;
    for(auto j = 0; j < A.size() - 2; ++j){
        double b = (B[j] / 2.0);
        double c = (C[j] / 3.0);
        double comp = min(b, c);
        if(minim > comp){
            minim = comp;
            ind = j;
        }    
    }
    if(minim > B[A.size() - 2] / 2){
        minim = B[A.size() - 2] / 2;
        ind = A.size() - 2;
    }
    return ind;
}