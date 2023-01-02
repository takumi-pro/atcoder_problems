#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(k);
    vector<int> j(n, false);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    for (int i = 0; i < k; i++) cin >> b.at(i);

    int maxin = a.at(0);
    for (int i = 1; i < n; i++) {
        maxin = max(maxin, a.at(i));
    }

    bool flg = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (a.at(i) == maxin && (i + 1) == b.at(j)) {
                flg = true;
            }
        }
    }
    if (flg)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
