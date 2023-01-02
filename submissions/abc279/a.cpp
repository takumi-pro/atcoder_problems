#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 0;
    for (char s : S) {
        if (s == 'v') count++;
        if (s == 'w') count += 2;
    }
    cout << count << endl;
}
