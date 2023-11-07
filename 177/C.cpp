#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;
const ll MOD = 1e9 + 7;


int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    vector<ll> p(n);
    rep(i,n){
        cin >> a[i];
        sum += a[i];
    }
    ll ans = 0;
    p[0] = sum-a[0];
    repi(i,1,n-1){
        p[i] = p[i-1] -a[i];
    }
    rep(i,n){
        ans += (a[i] % MOD) * (p[i] % MOD);
        ans %= MOD;
    }

    cout << ans << endl;


    return 0;
}