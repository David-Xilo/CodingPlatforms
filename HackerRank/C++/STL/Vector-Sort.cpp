#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    vector<int> vec;
    for(auto i = 0; i < size; ++i){
        int j;
        cin >> j;
        vec.push_back(j);
    }
    sort(vec.begin(), vec.end());
    for(auto j : vec) cout << j << " ";
    return 0;
}

