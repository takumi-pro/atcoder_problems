#include <bits/stdc++.h>
using namespace std;

int myMax(int a, int b, int c) {
    int tmp = max(a, b);
    return max(tmp, c);
}

int myMin(int a, int b, int c) {
    int tmp = min(a, b);
    return min(tmp, c);
}

int main() {
    int a, b, c, result;
    cin >> a >> b >> c;
    result = myMax(a, b, c) - myMin(a, b, c);
    cout << result << endl;
}
