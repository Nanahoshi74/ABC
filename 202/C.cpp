#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    map<ll,ll> mpa,mpb;
    rep(i,n){
        ll a;
        cin >> a;
        mpa[a]++;
    }
    vector<ll> b(n);
    rep(i,n) cin >> b[i];
    rep(i,n){
        ll c;
        cin >> c;
        mpb[b[c-1]]++;
    }
    ll ans = 0;
    repi(i,1,n){
        ans += mpa[i] * mpb[i];
    }

    cout << ans << endl;

    return 0;
}