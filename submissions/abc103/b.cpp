#include <bits/stdc++.h>
using namespace std;

string rotate(string s) {
    int sl = s.size();
    char head = s.at(sl - 1);
    s.pop_back();
    return head + s;
}

int main() {
    string s, t;
    cin >> s >> t;
    int sl = s.size();

    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }

    for (int i = 0; i < sl; i++) {
        s = rotate(s);
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
