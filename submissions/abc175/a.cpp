#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string s1, s2, s3;

    if (S == "SSS") {
        cout << 0 << endl;
    } else if (S == "RRR") {
        cout << 3 << endl;
    } else if (S == "RRS" || S == "SRR") {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }
}
