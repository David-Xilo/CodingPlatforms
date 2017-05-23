#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long arr[5];
    long min = -1, max = -1;
    long sum = 0;
    for(auto i = 0; i < 5; ++i){
        cin >> arr[i];
        if(i == 0){
            min = arr[i];
            max = arr[i];
        }
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }
    cout << sum - max << " " << sum - min;
    return 0;
}
