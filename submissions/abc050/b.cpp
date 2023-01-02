#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, M;
    cin >> N;
    vector<int> T(N);
    for (int i = 0; i < N; i++) cin >> T.at(i);
    cin >> M;
    vector<vector<int>> PX(M, vector<int>(2));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> PX.at(i).at(j);
        }
    }
    for (int i = 0; i < M; i++) {
        vector<int> Tc = T;
        Tc.at(PX.at(i).at(0) - 1) = PX.at(i).at(1);
        cout << accumulate(Tc.begin(), Tc.end(), 0) << endl;
    }
}
