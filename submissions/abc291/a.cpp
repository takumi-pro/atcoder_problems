#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main(void) {
    string S;
    cin >> S;
    rep(i, S.length()) {
        if (isupper(S[i])) cout << i + 1 << endl;
    }
}
