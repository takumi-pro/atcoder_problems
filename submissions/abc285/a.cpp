#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, init, n) for (int i = init; i < (int)(n); i++)

int main(void){
  int a,b;
  cin >> a >> b;
  if (b == 2*a || b == 2*a+1) cout << "Yes" << endl;
  else cout << "No" << endl;
}
