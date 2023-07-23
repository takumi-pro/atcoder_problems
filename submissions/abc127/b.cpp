#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, D, x;
    cin >> r >> D >> x;
    int x_i = r * x - D;
    for (int i = 0; i < 10; ++i) {
        cout << x_i << endl;
        x_i = r * x_i - D;
    }
}
