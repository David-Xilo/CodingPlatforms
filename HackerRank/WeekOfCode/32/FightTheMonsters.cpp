#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // just shoot the monsters by order of their HP
    int n, hit, t;
    cin >> n >> hit >> t;
    vector<int> monsters(n);
    for(auto i = 0; i < n; ++i){
        int val;
        cin >> val;
        monsters[i] = val;
    }
    sort(monsters.begin(), monsters.end());
    int counter = 0;
    int current = 0;
    for(auto i = 0; i < t; ++i){
        monsters[current] -= hit;
        if(monsters[current] <= 0){
            ++current;
            ++counter;
        }
    }
    cout << counter;
    return 0;
}

