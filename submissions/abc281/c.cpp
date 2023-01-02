#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t;
    long long sum = 0;
    cin >> n >> t;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    for (int i = 0; i < n; i++) {
        sum += a.at(i);
    }

    long long d = t % sum;
    int number = 0;
    for (int i = 0; i < n; i++) {
        if (a.at(i) < d) {
            d = d - a.at(i);
            continue;
        }
        number = i + 1;
        break;
    }
    cout << number << " " << d << endl;
    return 0;
}
