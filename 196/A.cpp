#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c,d;;
    cin >> a >> b >> c >> d;
    ll x,y;
    x = max(a,b);
    y = min(c,d);

    cout << x - y << endl;

    return 0;
}