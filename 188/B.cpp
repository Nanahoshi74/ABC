#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    ll ans = 0;

    rep(i,n){
        ans += a[i]*b[i];
    }
    if(ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}