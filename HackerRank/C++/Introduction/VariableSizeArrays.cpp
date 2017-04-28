#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int A, Q;
    scanf("%d %d\n", &A, &Q);
    vector<vector<int> > v;
    for(int l = 0; l < A; ++l){
        int s;
        vector<int> vec;
        v.push_back(vec);
        scanf("%d ", &s);
        for(int i = 0; i < s; ++i){
            int val;
            scanf("%d" , &val);
            v[l].push_back(val);
        }
    }
    for(int j = 0; j < Q; ++j){
        int line, col;
        scanf("%d %d", &line, &col);
        printf("%d\n", v[line][col]);
    }
    return 0;
}

