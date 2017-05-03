#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, singlePos, beg, end;
    vector<int> vec;
    cin >> size;
    for(auto i = 0; i < size; ++i){
        int val;
        cin >> val;
        vec.push_back(val);
    }
    cin >> singlePos >> beg >> end;
    // the position is given having the index starting at 1,
    // it needs to be decremented to have the index start at 0
    vec.erase(vec.begin() + --singlePos);
    vec.erase(vec.begin() + --beg, vec.begin() + --end);
    cout << vec.size() << endl;
    for(auto i : vec)
        cout << i << " ";
    return 0;
}

