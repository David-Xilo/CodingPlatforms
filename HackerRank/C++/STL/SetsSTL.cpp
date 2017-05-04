#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int Q;
    cin >> Q;
    set<int> st;
    for(auto i = 0; i < Q; ++i){
        int type, val;
        cin >> type >> val;
        if(type == 1){
            st.insert(val);
        }else if(type == 2){
            st.erase(val);
        }else{
            set<int>::iterator itr = st.find(val);
            if(itr == st.end()){
                cout << "No" << endl;
            }else{
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}

