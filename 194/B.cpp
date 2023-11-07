#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];

    ll a1,b1;
    a1 = 1e6,b1 = 1e6;
    ll ans = 1e9;
    rep(i,n){
        a1 = a[i];
        b1 = 1e9;
        rep(j,n){
            if(i != j){
                b1 = min(b1,b[j]);
            }
       }
        ans = min({max(a1,b1),ans,a[i]+b[i]});
    }
    
    cout << ans << endl;

    return 0;
}