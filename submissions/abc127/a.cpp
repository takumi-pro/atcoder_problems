#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int resu = 0;
    if (a >= 6 && a <= 12) resu = b / 2;
    if (a > 12) resu = b;
    cout << resu;
}
