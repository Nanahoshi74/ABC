#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    //map<ll,ll> mp;
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<ll> b(n+1);
    ll ans = 0;
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        b[i] = b[i-1] + a[i];
    }
    for(int i = n-1; i > 0; i--){
        ans += a[i] * i -b[i-1];
    }

    cout << ans << endl;




    return 0;
}