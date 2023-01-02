#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    s = regex_replace(s, regex(","), ".");
    bool flg = false;
    for (int i = 0; i < n; i++) {
        if (s.at(i) == '.' && flg) {
            s.at(i) = ',';
        };
        if (s.at(i) == '"' && flg) {
            flg = false;
            continue;
        }
        if (s.at(i) == '"' && !flg) {
            flg = true;
            continue;
        }
    }
    cout << s << endl;
}
