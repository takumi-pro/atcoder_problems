#include <bits/stdc++.h>
using namespace std;

int main() {
    int r;
    cin >> r;
    string res = "ARC";
    if (r < 1200) res = "ABC";
    if (r >= 2800) res = "AGC";
    cout << res << endl;
}
