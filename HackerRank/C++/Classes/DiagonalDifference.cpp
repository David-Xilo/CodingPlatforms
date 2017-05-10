#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int sum1 = 0, sum2 = 0;
    //diagonals are elements [0][0], [1][1] .. [i][i]
    //second diagonal are elements [0][N-1], [1][N-2] .. [i][N-1-i]
    for(auto i = 0; i < N ; ++i){
        for(auto j = 0; j < N; ++j){
            //first diagonal
            int val;
            cin >> val;
            if(j == i)
                sum1 += val;
            if(j == (N - 1 - i))
                sum2 += val;
            
        }
    }
    cout << abs(sum1 - sum2);
    return 0;
}

