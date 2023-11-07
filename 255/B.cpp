#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    vector<ll> a(k);
    rep(i,k) cin >> a[i];
    ll ans = 0;

    vector<ll> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    rep(i,n){
        ll ans2  = 8e18;
        rep(j,k){
            ans2 = min(ans2,(x[a[j]-1]-x[i])*(x[a[j]-1]-x[i]) + (y[a[j]-1]-y[i])*(y[a[j]-1]-y[i]));
        }
        ans = max(ans,ans2);
    }


    printf("%.12lf\n",sqrt((double)ans));

    return 0;
}