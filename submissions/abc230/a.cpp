#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 42) n++;
    string s = to_string(n);
    if (s.size() == 1) cout << "AGC00" + s << endl;
    if (s.size() == 2) cout << "AGC0" + s << endl;
}
