// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;

// 100%
vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> sol(N);
    
    int maximum = 0;
    int totalMax = 0;
    for(auto i : A){
        // if the operation is maxcounters, save the maximum into the total
        // maximum variable
        // else, it should just choose between the total maximum obtained from
        // the last maxcounters operation, or the value already in the vector,
        // and increment it at last. Finally updates the var maximum.
        if(i == N + 1){
            totalMax = maximum;
        }else{
            sol[i-1] = max(totalMax, sol[i-1]);
            if(++sol[i-1] > maximum){
                maximum = sol[i-1];
            }
        }
    }
    
    // here updates values that did not enter the operation of incrementing
    // in the else clause of the for loop above
    for(int index = 0; index < N; ++index){
        sol[index] = max(totalMax, sol[index]);    
    }
    
    return sol;
}
