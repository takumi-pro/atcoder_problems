#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> data(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> data.at(i).at(j);
        }
    }

    vector<bool> row(H);
    vector<bool> col(W);

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (data.at(i).at(j) == '#') {
                row.at(i) = true;
                col.at(j) = true;
            }
        }
    }

    for (int i = 0; i < H; i++) {
        if (row.at(i)) {
            for (int j = 0; j < W; j++) {
                if (col.at(j)) {
                    cout << data.at(i).at(j);
                }
            }
            cout << endl;
        }
    }
}
