#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,x;
    cin >> n >> x;
    x *= 100;
    vector<ll> v(n),p(n);
    rep(i,n) cin >> v[i] >> p[i];
    ll ans = 0;
    rep(i,n){
        ll y = v[i]*p[i];
        ans += y;
        if(ans > x){
            cout << i+1 << endl;
            return 0;
         }
    }
    cout << -1 << endl;


    return 0;
}