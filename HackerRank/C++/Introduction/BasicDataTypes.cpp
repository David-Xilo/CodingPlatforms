#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int d;
    long ld;
    long long lld;
    char c;
    float f;
    double lf;
    scanf("%d %ld %lld %c %f %lf", &d, &ld, &lld, &c, &f, &lf);
    printf("%d \n", d);
    printf("%ld \n", ld);
    printf("%lld \n", lld);
    printf("%c \n", c);
    printf("%f \n", f);
    printf("%lf \n", lf);
    return 0;
}

