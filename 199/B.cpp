#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    ll ma = -2,mi = 1e15;
    rep(i,n){
        cin >> a[i];
        ma = max(ma,a[i]);
    }
    rep(i,n){
        cin >> b[i];
        mi = min(mi,b[i]);
    }

    ll ans = 0;

    if(ma <= mi){
        ans = mi - ma + 1;
    }

    cout << ans << endl;

    return 0;
}