// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;
int solution(vector<int> &A) {
    if(A.size() == 0) return -1;
    int leader = A[0];
    int counter = 1;
    int result = 0;
    for(int i = 1; i < A.size(); ++i) {
        if(leader == A[i]) {
            ++counter;
        } else {
            if(counter) {
                --counter;
            } else {
                leader = A[i];
                ++counter;
                result = i;
            }
        }
    }
    counter = 0;
    for(int a : A) if(a == leader) ++counter;
    if(counter > A.size()/2) return result;
    return -1;
}