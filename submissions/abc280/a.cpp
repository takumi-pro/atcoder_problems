#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, count = 0;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s.at(i);
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s.at(i).at(j) == '#') count++;
        }
    }
    cout << count << endl;
    return 0;
}
