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

        cout<<((x == y) ? "=" : (x > y) ? ">" : "<")<<endl;        
    }

    return 0;
}