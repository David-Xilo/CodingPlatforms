// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    int M = P.size();
    int N = S.size();
    vector<int> sol;
    
    //vars to count the occurrences
    //T doesn't need to be counted, since its the worst result
    //since its a prefix sum, index 0 will hold 0, and the counting
    //will begin afterwards
    int A[N + 1];
    int C[N + 1];
    int G[N + 1];
    
    //initialization of these auxiliars
    A[0] = 0;
    C[0] = 0;
    G[0] = 0;
    
    
    // 1st counts the number of occurrences of a certain nucleotides 
    // until a certain position
    for(int j = 1; j <= N; ++j){
        short a = 0, c = 0, g = 0;
        if(S[j - 1] == 'A'){
            a = 1;
        }
        if(S[j - 1] == 'C'){
            c = 2;
        }
        if(S[j - 1] == 'G'){
            g = 3;    
        }
        A[j] = A[j - 1] + a;
        G[j] = G[j - 1] + g;
        C[j] = C[j - 1] + c;
    }
    
    //runs the queries
    //checks the number of each nucleoide that appears
    //on each range, by checking the difference of the sums
    //the index of the end has +1 since the first position of the counters
    //is a dummy position, and this way the difference will be correct
    for(int i = 0; i < M; ++i){
        int beg = P[i];
        int end = Q[i] + 1;
        
        //has a A in the range
        if(A[end] - A[beg] > 0){
            sol.push_back(1);
            continue;
        }
        if(C[end] - C[beg] > 0){
            sol.push_back(2);
            continue;
        }
        if(G[end] - G[beg] > 0){
            sol.push_back(3);
            continue;
        }
        sol.push_back(4);
    }
    return sol;
}