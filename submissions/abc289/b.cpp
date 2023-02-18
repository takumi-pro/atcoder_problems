#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<bool> re(n + 1);
    rep(i, m) {
        int a;
        cin >> a;
        re[a] = true;
    }

    // レ点がない場所の配列
    vector<int> b;
    rep(i, n + 1) if (!re[i]) b.push_back(i);

    vector<int> ans(n);
    rep(i, n) ans[i] = i + 1;
    int bn = b.size() - 1;
    rep(i, bn) {
        reverse(ans.begin() + b[i], ans.begin() + b[i + 1]);
    }
    rep(i, n) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
