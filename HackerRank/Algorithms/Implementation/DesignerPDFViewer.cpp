#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<char, int> heights;
    string word;
    for(auto i = 0; i < 26; ++i){
        int h;
        cin >> h;
        char c = 'a' + i;
        heights.insert(pair<char, int>(c, h));
    }
    cin >> word;
    int max = 0;
    for(auto i = 0; i < word.size(); ++i){
        if(heights[word[i]] > max){
            max = heights[word[i]];
        }
    }
    cout << word.size() * max;
    
    return 0;
}

