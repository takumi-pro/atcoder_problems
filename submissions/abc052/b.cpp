#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, x = 0, x_max = 0;
    string S;
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        if (S.at(i) == 'I')
            x++;
        else
            x--;
        x_max = max(x, x_max);
    }
    cout << x_max << endl;
}
