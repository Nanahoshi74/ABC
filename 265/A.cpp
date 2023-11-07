#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll x,y,n;
    cin >> x >> y >> n;
    ll ans = 0;
    ans += (n/3) * y;
    ll n2 = n;
    n -= n/3 * 3;
    ans += x * n;

    ll ans2 = 0;
    ans2 += x * n2;

    cout << min(ans,ans2) << endl;


    return 0;
}