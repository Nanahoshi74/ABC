#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    vector<vector<ll>> G(n);
    rep(i,m){
        ll u,v;
        cin >> u >> v;
        u--,v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    ll ans = 0;
    rep(i,n){
        vector<ll> &k = G[i];
        bool ok = true;
        rep(j,k.size()){
            if(a[i] <= a[k[j]]){
                ok = false;
                break;
            }
        }
        if(ok) ans++;
    }

    cout << ans << endl;


    return 0;
}