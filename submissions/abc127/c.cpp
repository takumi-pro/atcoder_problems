#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int Lmax = 1;
    int Rmin = n;
    for (int i = 0; i < m; ++i) {
        int L, R;
        cin >> L >> R;
        Lmax = max(Lmax, L);
        Rmin = min(Rmin, R);
    };
    int result = Rmin - Lmax + 1;
    result = max(result, 0);
    cout << result << endl;
}
