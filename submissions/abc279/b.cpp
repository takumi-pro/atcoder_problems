#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int sl = S.size(), tl = T.size();

    if (sl < tl) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < sl - tl + 1; i++) {
        bool flg = true;
        for (int j = 0; j < tl; j++) {
            if (S.at(i + j) != T.at(j)) flg = false;
        }
        if (flg) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
