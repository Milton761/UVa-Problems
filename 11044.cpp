#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {

    int TC, x, y;

    scanf("%d", &TC);
    while (TC--) {
        scanf("%d %d", &x, &y);
        
        printf("%d\n", (int) (ceil((x-2)/3.0) * ceil((y-2)/3.0)) );
    }

    return 0;
}