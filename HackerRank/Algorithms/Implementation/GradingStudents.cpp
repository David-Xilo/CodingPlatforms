#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int grades[N];
    for(auto i = 0; i < N; ++i){
        int grade;
        cin >> grade;
        if(grade > 37){
            if(grade % 5 > 2)
                grade = grade + 5 - (grade % 5);
        }
        cout << grade << endl;
    }
    return 0;
}

