#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (A <= B && 6 * A >= B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
