#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main() {
    string s, ns = "";
    cin >> s;
    rep(i, s.length()) {
        if (s[i] == '1') ns = ns + '0';
        if (s[i] == '0') ns = ns + '1';
    }
    cout << ns << endl;
}
