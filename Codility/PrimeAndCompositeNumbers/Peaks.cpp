// you can use includes, for example:
#include <algorithm>
#include <stdlib.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    vector<int> peaks;
    for (auto i = 1; i < A.size() - 1; ++i) {
        if (A[i] > A[i - 1] && A[i] > A[i + 1])
            peaks.push_back(i);
    }
    int splits = 0;
    for (auto j = 1; j <= peaks.size(); ++j) {
        if(A.size() % j != 0)
            continue;
        
        int sp = j;
        int K = A.size() / sp;
        int counter = K;
        int begin = 0;


        for (auto h : peaks) {
            if (h < K && h >= begin) {
                --sp;
                if (sp == 0)
                    break;
                begin += counter;
                K += counter;
            }
            if (h > K - 1)
                break;
        }
        if (sp == 0)
            splits = j;

    }

    return splits;
}