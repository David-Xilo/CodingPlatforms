// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    vector<int> leafs(X, -1);
    for(auto i = 0; i < A.size(); ++i){
        if(A[i] > 0 && A[i] <= X && leafs[A[i] - 1] == -1)
            leafs[A[i] - 1] = i;
    }
    int max = -1;
    for(auto j : leafs){
        if(j == -1)
            return -1;
        if(j > max)
            max = j;
    }
    return max;
}