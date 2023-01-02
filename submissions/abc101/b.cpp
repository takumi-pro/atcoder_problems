#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    int sn = 0;
    for (char S : s) {
        sn += int(S - '0');
    }
    if (n % sn == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
