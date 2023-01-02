#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, minim, sum;
    cin >> A >> B >> C;
    sum = A + B + C;
    minim = min({A, B, C});
    cout << sum - minim << endl;
}
