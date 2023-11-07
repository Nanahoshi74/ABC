#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n),p(n),x(n);
    rep(i,n) cin >> a[i] >> p[i] >> x[i];

    ll ans =1e10;

    rep(i,n){
        if(x[i]-a[i] > 0){
            ans = min(ans,p[i]);
        }
    }

    if(ans == 1e10) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}