#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main(void) {
    int n;
    cin >> n;
    vector<string> W(n);
    rep(i, n) cin >> W[i];

    bool flg = false;
    rep(i, n) if (W[i] == "and" || W[i] == "not" || W[i] == "that" || W[i] == "the" || W[i] == "you") flg = true;
    if (flg)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
