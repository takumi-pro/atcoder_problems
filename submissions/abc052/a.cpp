#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (A * B == C * D)
        cout << A * B << endl;
    else
        cout << max(A * B, C * D) << endl;
}
