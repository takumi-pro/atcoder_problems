#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, count = 0;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (vec[i] != vec[j] && vec[k] != vec[j] && (vec[k] - vec[j]) < vec[i]) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}
