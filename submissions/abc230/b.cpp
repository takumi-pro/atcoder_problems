#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (string T : {"oxx", "xxo", "xox"}) {
        bool flg = true;
        for (int i = 0; i < (int)s.size(); i++) {
            if (T[i % 3] != s[i]) flg = false;
        }

        if (flg) {
            cout << "Yes" << endl;
            exit(0);
        }
    }
    cout << "No" << endl;
}
