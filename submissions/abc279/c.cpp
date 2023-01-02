#include <bits/stdc++.h>
using namespace std;

// 入力
vector<string> input(int h) {
    vector<string> cp(h);
    for (int i = 0; i < h; i++) {
        cin >> cp.at(i);
    }
    return cp;
}

// 渡した行列を転置行列にする
vector<string> tenti(vector<string> s, int h, int w) {
    // xは他の文字列で埋める必要がある
    vector<string> x(w, string(h, '?'));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            x[j][i] = s[i][j];
        }
    }
    return x;
}

int main() {
    int h, w;
    cin >> h >> w;
    auto s = input(h);
    auto t = input(h);
    auto ts = tenti(s, h, w);
    auto tt = tenti(t, h, w);
    // ソート
    sort(ts.begin(), ts.end());
    sort(tt.begin(), tt.end());
    if (ts == tt)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
