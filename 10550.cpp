#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {

    int i, a, b ,c;
    while(scanf("%d %d %d %d", &i, &a, &b, &c) && (i || a || b || c)) {

        int g1 = (i > a) ? i - a : 40 + i - a;
        i = a;

        int g2 = (b > i) ? b - i : 40 + b - i; 
        i = b;

        int g3 = (i > c) ? i - c : 40 + i - c;

        printf("%d\n", (g1 + g2 + g3 + 120) * 9);

    }   

    return 0;
}