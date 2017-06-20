#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b; // % is remainder
        a = temp;
    }
    return a;
}

int gcd(vector<int> &input) {
    int result = input[0];
    for (int i = 1; i < input.size(); i++) {
        result = gcd(result, input[i]);
    }
    return result;
}

int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}

int lcm(vector<int> &input) {
    int result = input[0];
    for (int i = 1; i < input.size(); i++) {
        result = lcm(result, input[i]);
    }
    return result;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (auto i = 0; i < N; ++i)
        cin >> A[i];
    for (auto i = 0; i < M; ++i)
        cin >> B[i];
    int l = lcm(A);
    int g = gcd(B);
    int count = 0;
    for (int i = l; i <= g; i += l) {
        if (g % i == 0)
            count++;
    }
    cout << count;
    return 0;
}

