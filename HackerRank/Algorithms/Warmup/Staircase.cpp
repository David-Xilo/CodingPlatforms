#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    for(auto i = 1; i < N +1 ; ++i){
        for(auto j = i; j < N ; ++j){
            cout << " ";
        }
        for(auto k = 0; k < i; ++k){
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}
