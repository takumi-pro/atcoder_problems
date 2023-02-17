#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

void swap(vector<int> &a, int i, int t) {
    int tmp;
    tmp = a[i];
    a[i] = a[t];
    a[t] = tmp;
}

int main(void) {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int diff = q - p;
    rep(i, diff + 1) swap(a, p - 1 + i, r - 1 + i);
    rep(i, n) cout << a[i] << " ";
    cout << endl;
}
