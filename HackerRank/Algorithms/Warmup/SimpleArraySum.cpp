#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, j, sum = 0;
    cin >> N;
    for(auto i = 0; i < N; ++i){
        cin >> j;
        sum += j;
    }
    cout << sum;
    return 0;
}

