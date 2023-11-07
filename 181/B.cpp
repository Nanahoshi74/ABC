#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    ll ans = 0;
    rep(i,n){
        cin >> a[i] >> b[i];
        ll p = b[i]-a[i] + 1;
        ans += ((a[i] + b[i])*p)/2.0;
    }

    cout << ans << endl;


    return 0;
}