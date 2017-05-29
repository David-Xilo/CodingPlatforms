#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int max = 0, count = 0;
    for(auto i = 0; i < N; ++i){
        int h;
        cin >> h;
        if(h > max){
            max = h;
            count = 0;
        }
        if(h == max)
            ++count;
    }
    cout << count;
    return 0;
}

