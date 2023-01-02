#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    int si, ei;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == 'A') {
            si = i;
            break;
        }
    }
    for (int i = s.size() - 1; i > 0; i--) {
        if (s.at(i) == 'Z') {
            ei = i;
            break;
        }
    }
    cout << (ei - si + 1) << endl;
}
