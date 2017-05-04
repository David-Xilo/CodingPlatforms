#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int Q;
    cin >> Q;
    map <string, int > mp;
    for(auto i = 0; i < Q; ++i){
        int type;
        string key;
        cin >> type >> key;
        if(type == 1){
            int val;
            cin >> val;
            map<string, int >::iterator itr = mp.find(key);
            if(itr == mp.end()){
                mp.insert(make_pair(key, val));
            }else{
                int sum = mp[key] + val;
                mp[key] = sum;    
            }
        }else if(type == 2){
            mp.erase(key);
        }else{
            map<string, int >::iterator itr = mp.find(key);
            if(itr == mp.end()){
                cout << 0 << endl;
            }else{
                cout << mp[key] << endl;
            }
        }
    }
    return 0;
}

