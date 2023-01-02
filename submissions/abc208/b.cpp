#include <bits/stdc++.h>
using namespace std;

int main() {
    int P, count = 0;
    int se;
    cin >> P;
    int f[11];
    f[0] = 1;
    for (int i = 1; i <= 10; i++) {
        f[i] = f[i - 1] * i;
        se = f[i] * (i + 1);
        int sum = P % se;
        count += sum / f[i];
        P -= sum;
    }

    cout << count << endl;
}
