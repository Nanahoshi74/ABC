#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll k,n;
    cin >> k >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    a.push_back(a[0] + k);
    ll l = 0;
    rep(i,n){
        l = max(l,a[i+1]-a[i]);
    }
    ll ans = k-l;

    cout << ans << endl;

    return 0;
}