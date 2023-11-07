#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c;
    cin >> a >> b >> c;
    if(a == b) cout << c << endl;
    else if(a == c) cout << b << endl;
    else if(b == c) cout << a << endl;
    else cout << 0 << endl;

    return 0;
}