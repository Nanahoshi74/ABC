#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    vector<ll> p(n);
    ll ans = 0;
    rep(i,n){
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    rep(i,k){
        ans += p[i];
    }

    cout << ans << endl;

    return 0;
}