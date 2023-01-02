#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> s.at(i);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            a.at(0) = s.at(0);
            continue;
        }
        a.at(i) = s.at(i) - s.at(i - 1);
    }
    for (int i = 0; i < n; i++) cout << a.at(i) << " ";
    cout << endl;
    return 0;
}
