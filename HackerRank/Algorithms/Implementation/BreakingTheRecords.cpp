#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int most, least, countM = 0, countL = 0;
    cin >> most;
    least = most;
    for(auto i = 1; i < n; ++i){
        int score;
        cin >> score;
        if(score > most){
            ++countM;
            most = score;
        }
        if(score < least){
            ++countL;
            least = score;
        }
    }
    cout << countM << " " << countL;
    return 0;
}

