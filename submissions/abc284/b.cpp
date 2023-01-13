#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main() {
    int t;
    cin >> t;
    rep(i, t) {
        int n, c = 0;
        cin >> n;
        vector<int> test(n);
        rep(i, n) cin >> test[i];
        rep(i, n) {
            if (test[i] % 2 != 0) c++;
        }
        cout << c << endl;
    }
    return 0;
}
