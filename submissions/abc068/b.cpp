#include <bits/stdc++.h>
using namespace std;

int divisionCount(int n) {
    int count = 0;
    while (n % 2 == 0 && n > 0) {
        count++;
        n = n / 2;
    }
    return count;
}

int main() {
    int N, ans = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        ans = max(divisionCount(i), ans);
    };
    cout << pow(2, ans) << endl;
}
