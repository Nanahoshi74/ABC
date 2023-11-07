#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(m),b(m);
    rep(i,m){
        cin >> a[i] >> b[i];
    }
    ll k;
    cin >> k;
    vector<ll> c(k),d(k);
    rep(i,k){
        cin >> c[i] >> d[i];
    }
    ll ans = 0;
    rep(i,1 << k){
        vector<pair<bool,bool>> p(m);
        ll ans2 = 0;
        rep(j,k){
            ll k;
            if(i & (1 << j)){
                k = c[j];
            }
            else{
                k = d[j];
            }
            rep(i,m){
                if(a[i] == k){
                    p[i].first = true;
                }
                if(b[i] == k){
                    p[i].second = true;
                }
            }
        }
        rep(i,m){
            if(p[i].first && p[i].second){
                ans2++;
            }
        }
        ans = max(ans,ans2);
    }

    cout << ans << endl;






    return 0;
}