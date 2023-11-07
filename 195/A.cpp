#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll m,h;
    cin >> m >> h;
    if(h % m == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}