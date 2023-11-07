#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll s = 0,t = 0;
    rep(i,m) s += a[i] * (i+1);
    rep(i,m) t += a[i];

    ll ans = s;
    rep(i,n-m){
        ll ns = s - t + a[i+m]*m;
        ll nt = t -a[i] + a[i+m];
        s = ns,t = nt;
        ans = max(ans,s);
    } 

    cout << ans << endl;


    return 0;
}