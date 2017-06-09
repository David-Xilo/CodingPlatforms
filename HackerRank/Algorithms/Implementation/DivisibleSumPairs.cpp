#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //Brute force approach
    int n, k;
    cin >> n >> k;
    int val[n];
    for(auto i = 0; i < n; ++i)
        cin >> val[i];
    int sum = 0;
    for(auto i = 0; i < n-1; ++i){
        for(auto j = i+1; j < n; ++j){
            if((val[i]+val[j]) % k == 0)
                ++sum;
        }
    }
    cout << sum;
    return 0;
}
