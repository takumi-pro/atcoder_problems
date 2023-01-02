#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Y, sum, A[3];
    cin >> N >> Y;
    for (int i = 0; i < 3; i++) {
        A[0] = -1;
        A[1] = -1;
        A[2] = -1;
    }

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N - i; j++) {
            int k = N - i - j;
            sum = 10000 * i + 5000 * j + 1000 * k;
            if (sum == Y) {
                A[0] = i;
                A[1] = j;
                A[2] = k;
            }
        }
    }
    cout << A[0] << " " << A[1] << " " << A[2] << endl;
}
