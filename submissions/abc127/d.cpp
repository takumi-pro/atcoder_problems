#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; ++i)

int main() {
    long long N, M;
    cin >> N >> M;
    vector<long long> A(N);
    vector<long long> B(M);
    vector<long long> C(M);
    priority_queue<pair<long long, long long> > q;
    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i] >> C[i];
    rep(i, N) q.push(make_pair(A[i], 1));
    rep(i, M) q.push(make_pair(C[i], B[i]));

    long long ans = 0;
    rep(i, N) {
        auto P = q.top();
        q.pop();
        ans += P.first;
        if (P.second > 1) {
            P.second--;
            q.push(P);
        }
    }
    cout << ans << endl;
}
