
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool impossibleCond(int k1, int k2, int v1, int v2){
    return ( (k1 > k2) && (v1 > v2) ) || ( (k2 > k1) && (v2 > v1) );
}

int main() {
    int k1, v1, k2, v2;
    cin >> k1 >> v1 >> k2 >> v2;
    if(impossibleCond(k1, k2, v1, v2)){
        cout << "NO";
    }else{
        int first = min(k1, k2), sec = max(k1, k2);
        for(int i = first, j = sec; i <= j; i+= v1, j+= v2){
            if(i == j){
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
    }
    return 0;
}
