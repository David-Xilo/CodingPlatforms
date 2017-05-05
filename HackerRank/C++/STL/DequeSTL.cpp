#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
/*
 * The solution is quite easy to come up with, however if too many checks are made
 * the system times out.
 * 
 * This solution saves the max, checks at each iteration if new number is greater
 * than the max, if it isn't
 * checks if the max is front of queue, and if it is recomputes it.
 * 
 * It wouldn't be needed a queue for this. 
 */

void printKMax(int arr[], int n, int k){
    deque<int> dq;
    int max = arr[0], ind = 0;
    for(auto i = 0; i < k ; ++i){
        dq.push_back(arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max << " ";
    for(auto j = k; j < n; ++j){
        dq.push_back(arr[j]);
        if(dq.front() == max){
            max = dq[1];
            for(auto s = 1; s < dq.size(); ++s){
                if(dq[s] > max){
                    max = dq[s];
                }
            }
        }else{
            if(dq.back() > max){
            max = dq.back();
            }
        }
        dq.pop_front();
        
        cout << max << " ";
    }
    cout << endl;
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
