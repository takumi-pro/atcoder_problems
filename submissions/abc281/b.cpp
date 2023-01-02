#include <bits/stdc++.h>
using namespace std;

string s;
string sn;
int sl;
int snl;

string output() {
    if (sl != 8) return "No";
    string sn = s.substr(1, sl - 2);
    snl = sn.size();
    if (snl != 6) return "No";
    if (s.at(1) == '0') return "No";
    if (s.at(0) < 'A' || 'Z' < s.at(0)) return "No";
    if (s.at(sl - 1) < 'A' || 'Z' < s.at(sl - 1)) return "No";
    for (int i = 0; i < snl; i++) {
        if (isalpha(sn.at(i))) {
            return "No";
        }
    }
    int n = stoi(sn);
    if (n >= 100000 && n <= 999999) return "Yes";
    return "No";
}

int main() {
    cin >> s;
    sl = s.size();
    cout << output() << endl;
    return 0;
}
