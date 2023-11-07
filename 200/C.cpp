#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    map<ll,ll> mp;
    ll ans = 0;

    rep(i,n){
        ans += mp[a[i] % 200];
        mp[a[i] % 200]++;
    }

    cout << ans << endl;


    return 0;
}