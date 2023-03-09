#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int c = 0;
    rep(i, n) {
        if (c >= k) {
            s[i] = 'x';
            continue;
        }
        if (s[i] == 'o') c++;
    }
    cout << s << endl;
    return 0;
}
