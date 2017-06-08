#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, t, a, b, m, n, apples = 0, oranges = 0;
    cin >> s >> t >> a >> b >> m >> n;
    for(auto i = 0; i < m; ++i){
        int dist, check;
        cin >> dist;
        check = a + dist;
        if(check >= s && check <= t)
            ++apples;
    }
    for(auto i = 0; i < n; ++i){
        int dist, check;
        cin >> dist;
        check = b + dist;
        if(check >= s && check <= t)
            ++oranges;
    }
    cout << apples << endl;
    cout << oranges << endl;
    return 0;
}
