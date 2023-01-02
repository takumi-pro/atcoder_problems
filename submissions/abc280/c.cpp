#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;
    int sl = s.size();
    int result = 0;
    for (int i = 0; i < sl; i++) {
        if (i == sl - 1) result = i + 2;
        if (s.at(i) != t.at(i)) {
            result = i + 1;
            break;
        }
    }
    cout << result << endl;
    return 0;
}
