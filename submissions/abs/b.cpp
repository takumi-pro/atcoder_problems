#include <bits/stdc++.h>
using namespace std;

void hanbun(vector<int> &A) {
    for (int &a : A) {
        a = a / 2;
    }
}

int main() {
    int N;
    int count = 0;
    bool even_flg = true;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    while (even_flg) {
        for (int i = 0; i < N; i++) {
            if (A.at(i) % 2 != 0) {
                even_flg = false;
                break;
            }
            if (i + 1 == N) {
                count++;
                hanbun(A);
                break;
            }
        }
    }

    cout << count << endl;
    return 0;
}
