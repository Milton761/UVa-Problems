#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int TC;

    scanf("%d", &TC);
    while (TC--) {

        int S;
        scanf("%d", &S);

        vector<int> storePos;
        int p;
        while(S-- && cin>>p) {
            storePos.push_back(p);
        }

        int m = *min_element(storePos.begin(), storePos.end());
        int M = *max_element(storePos.begin(), storePos.end());

        cout<<(M-m)*2<<endl;
    }

    return 0;
}