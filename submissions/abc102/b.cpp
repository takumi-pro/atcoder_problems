#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    int max = -1;
    int min = 10000000000;
    for (int i = 0; i < n; i++) {
        if (max < a.at(i)) max = a.at(i);
        if (min > a.at(i)) min = a.at(i);
    }
    cout << abs(max - min) << endl;
    return 0;
}
