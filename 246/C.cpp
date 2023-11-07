#include <bits/stdc++.h>
typedef long long  ll;
#define rep(i, n) for (ll i = 0; i < (int)(n); i++)
using namespace std;

int main(){

    ll n,k,x;
    cin >> n >> k >> x;
    ll a[200005];
    rep(i,n) cin >> a[i];

    ll ans = 0;
    rep(i,n){
        ans += a[i];
    }

    ll m = 0;
    rep(i,n){
        m += a[i]/x;
    }
    m = min(m,k);
    ans -= m*x; k-=m;

    rep(i,n){
        a[i] %= x;
    }
    sort(a,a+n);

    for(int i=n-1;i >=0;i--){
        if(k == 0) break;
        ans -= a[i];
        k--;
    }

    cout << ans << endl;


    return 0;
}