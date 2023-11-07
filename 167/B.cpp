#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c,k;
    cin >> a >> b >> c >> k;
    ll p = 0;
    ll ans = 0;

    ans += 1 * min(k,a);
    k -= min(k,a);
    ans += 0 * min(k,b);
    k -= min(k,b);
    ans += -1 * min(k,c);
    k -= min(c,k);

    cout << ans << endl;

    return 0;
}