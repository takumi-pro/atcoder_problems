#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main(void) {
    int n;
    string s;
    cin >> n;
    cin >> s;

    repi(i, 1, n) {
        int c = 0;
        rep(j, n - i) {
            if (s[j] == s[j + i]) break;
            if (s[j] != s[j + i]) c++;
        }
        cout << c << endl;
    }
}
