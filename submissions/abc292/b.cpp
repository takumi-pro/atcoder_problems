#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> isRed(n, 0);
    rep(i, q) {
        int c, x;
        cin >> c >> x;
        if (c == 1) isRed[x - 1]++;
        if (c == 2) isRed[x - 1] += 2;
        if (c == 3) {
            if (isRed[x - 1] >= 2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}
