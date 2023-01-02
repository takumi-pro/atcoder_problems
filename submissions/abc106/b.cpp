#include <bits/stdc++.h>
using namespace std;

int returnCount(int N, int ycount, int count) {
    for (int i = 1; i <= N; i++) {
        ycount = 0;
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) ycount++;
            }
        }
        if (ycount == 8) count++;
    }
    return count;
}

int main() {
    int N;
    int count = 0;
    int ycount = 0;
    cin >> N;
    count = returnCount(N, ycount, count);

    cout << count << endl;
}
