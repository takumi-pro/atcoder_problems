#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    int ans = 0;
    rep(i, n) {
        rep(j, m) {
            if (b[j] == i + 1) ans += a[i];
        }
    }
    cout << ans << endl;
    return 0;
}
