#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    map<ll,ll> mp;
    ll ans = 0;
    rep(j,n){
        ans += j - mp[a[j]];
        mp[a[j]]++;
    }

    cout << ans << endl;
    
    return 0;
}