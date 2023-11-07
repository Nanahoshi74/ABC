#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,w;
    cin >> n >> w;
    vector<pair<ll,ll>> p(n);
    rep(i,n) cin >> p[i].first >> p[i].second;
    sort(p.rbegin(),p.rend());

    ll ans = 0;
    rep(i,n){
        ll x = min(p[i].second,w);
        ans += p[i].first * x;
        w -= min(w,p[i].second);
        if(w <= 0)
        break;
    }

    cout << ans << endl;

    return 0;
}