#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sl = s.size(), count = 0, upper = 0;
    string ss = s.substr(2, sl - 2);
    int ssl = ss.size();
    if (s.at(0) != 'A' || isupper(s.at(sl - 1)) || isupper(s.at(1))) {
        cout << "WA" << endl;
        return 0;
    }

    for (int i = 0; i < ssl; i++) {
        if (ss.at(i) == 'C') count++;
        if (isupper(ss.at(i))) upper++;
    }
    if (count != 1 || upper != 1) {
        cout << "WA" << endl;
        return 0;
    }
    cout << "AC" << endl;
}
