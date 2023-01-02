#include <bits/stdc++.h>
using namespace std;

int main() {
    int D, N;
    cin >> D >> N;
    int result;
    result = pow(100, D) * N;
    if (N == 100) {
        result = pow(100, D) * 101;
    };
    cout << result << endl;
    return 0;
}
