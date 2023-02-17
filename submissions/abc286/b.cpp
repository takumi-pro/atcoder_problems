#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

void swap(vector<int> &a, int i, int t) {
    int tmp;
    tmp = a[i];
    a[i] = a[t];
    a[t] = tmp;
}

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string target = regex_replace(s, regex("na"), "nya");
    cout << target << endl;
}
