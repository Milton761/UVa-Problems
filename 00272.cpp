// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208

#include <cstdio>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main() {

    string text;
    
    bool rightQuote = true;
    while(getline(cin, text)) {

        string result = "";

        for(int i=0; i<text.size(); i++) {
            char l = text[i];
            if (l == '"') {
                if (rightQuote) {
                    result += '`';
                    result += '`';
                } else {
                    result += '\'';
                    result += '\'';
                }

                rightQuote = !rightQuote;
            } else {
                result += l;
            }
        }

        cout<<result<<endl;
    }

    return 0;
}