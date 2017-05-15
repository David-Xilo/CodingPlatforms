#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<bool> createBitArray(){
    vector<bool> vec;
    vec.push_back(0);
    while(vec.size() <= 1000){
        unsigned int n = vec.size();
        for(auto i = 0; i < n; ++i){
            bool val = !vec[i];
            vec.push_back(val);
        }
    }
    return vec;
}

int main() {
    vector<bool> bitarray = createBitArray();
    int N;
    cin >> N;
    for(auto i = 0; i < N; ++i){
        int q;
        cin >> q;
        cout << bitarray[q] << endl;
    }
    return 0;
}
