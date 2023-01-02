#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S[N];
    string result = "Three";
    for (int i = 0; i < N; i++) cin >> S[i];
    for (int i = 0; i < N; i++) {
        if (S[i] == "Y") result = "Four";
    }
    cout << result << endl;
}
