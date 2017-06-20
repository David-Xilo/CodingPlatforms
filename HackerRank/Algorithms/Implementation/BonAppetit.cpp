#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, b;
    double sum = 0;
    cin >> n >> k;
    for(auto i = 0; i < n; ++i){
        int price;
        cin >> price;
        if(i != k)
            sum += (price / 2.0);
    }
    cin >> b;
    if(b > sum)
        cout << (b - round(sum));
    else
        cout << "Bon Appetit";
    
    return 0;
}

