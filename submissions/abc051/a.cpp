#include <bits/stdc++.h>
using namespace std;
int main(void) {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == ',') s.at(i) = ' ';
    }
    cout << s << endl;
}
