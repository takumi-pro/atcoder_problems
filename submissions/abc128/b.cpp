#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; ++i)

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> P(N);
    rep(i, N) cin >> S[i] >> P[i];
    vector<int> idx;
    rep(i, N) idx.push_back(i);
    sort(idx.begin(), idx.end(), [&](int a, int b) {
        if (S[a] != S[b]) return S[a] < S[b];
        return P[a] > P[b];
    });
    for (int i : idx) cout << (i + 1) << endl;
}
