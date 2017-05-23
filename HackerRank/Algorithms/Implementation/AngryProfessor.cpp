#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    for(auto i = 0; i < T; ++i){
        int N, K;
        cin >> N >> K;
        int count = 0;
        for(auto j = 0; j < N; ++j){
            int arrival;
            cin >> arrival;
            if(arrival <= 0)
                ++count;
        }
        if(count < K)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
