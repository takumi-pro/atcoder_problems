#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define derep(i, n) for (int i = n - 1; i >= 0; i--)

int main(void) {
    string s;
    cin >> s;

    int c = 0;
    bool flg = false;
    rep(i, s.size()) {
        if (s[i] == '0' && !flg) {
            flg = true;
            c++;
            continue;
        }

        if (s[i] == '0' && flg) {
            flg = false;
            continue;
        }

        flg = false;
        c++;
    }

    cout << c << endl;
}
