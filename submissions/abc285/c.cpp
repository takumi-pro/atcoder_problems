#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main(void) {
    string s;
    cin >> s;
    int sl = s.size();
    long long c = 0;
    reverse(s.begin(), s.end());
    rep(i, sl) {
        int aa = s[i] - 'A' + 1;
        if (i == 0) c += s[i] - 'A' + 1;
        if (i != 0) {
            long long a = pow(26, i) * (s[i] - 'A' + 1);
            c += a;
        }
    }
    cout << c << endl;
}
