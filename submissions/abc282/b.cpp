#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s.at(i);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            bool flg = true;
            for (int k = 0; k < m; k++) {
                if (s.at(i).at(k) == 'x' && s.at(j).at(k) == 'x') {
                    flg = false;
                }
            }
            if (flg) count++;
        }
    }
    cout << count << endl;
}
