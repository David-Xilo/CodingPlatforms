#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    vector<int> vec;
    cin >> size;
    for(auto i = 0; i < size; ++i){
        int val;
        cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());
    cin >> size;
    for(auto i = 0; i < size; ++i){
        int val;
        cin >> val;
        vector<int>::iterator itr = lower_bound(vec.begin(), vec.end(), val);
        if(*itr == val){
            cout << "Yes " << (itr - vec.begin()) + 1 << endl;
        }else{
            cout << "No " << (itr - vec.begin()) + 1 << endl;
        }
    }
    return 0;
}

