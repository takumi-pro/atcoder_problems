#include <bits/stdc++.h>
using namespace std;

// 2で何回割れるか
int numberof(int num) {
    if (num % 2 != 0) return 0;
    return numberof(num / 2) + 1;
}

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    int count = 0;
    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }

    for (int i = 0; i < N; i++) {
        count += numberof(a.at(i));
    }
    cout << count << endl;
}
