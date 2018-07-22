// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int findPossibleLeader(vector<int> &A) {
    if(A.size() == 0) return -1;
    int leader = A[0];
    int counter = 1;
    for(int i = 1; i < A.size(); ++i) {
        if(leader == A[i]) {
            ++counter;
        } else {
            if(counter) {
                --counter;
            } else {
                leader = A[i];
                ++counter;
            }
        }
    }
    return leader;
}

int countPossibleLeader(vector<int> &A, int leader) {
    int counter = 0;
    for(int a : A) if(a == leader) ++counter;
    if(counter > A.size()/2) return counter;
    return -1;
}

int halfLeft(int index) {
    return ((index + 1) / 2);
}

int halfRight(int size, int index) {
    return (size - 1 - index) / 2;
}

int solution(vector<int> &A) {
    int leader = findPossibleLeader(A);
    int leaderCount = countPossibleLeader(A, leader);
    if(leaderCount == -1) return 0;
    int counter = 0;
    int result = 0;
    for(int i = 0; i < A.size(); ++i) {
        if(A[i] == leader) {
            ++counter;
            --leaderCount;
        }
        if(counter > halfLeft(i) && leaderCount > halfRight(A.size(), i)) ++result;
    }
    return result;
}