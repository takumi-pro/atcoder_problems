#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int i = 0;
    for (char s : S) {
        if (s == '+') i++;
        if (s == '-') i--;
    }
    cout << i << endl;
}
