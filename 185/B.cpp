#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m,t;
    cin >> n >> m >> t;
    vector<ll> a(m),b(m);
    rep(i,m){
        cin >> a[i] >> b[i];
    }
    ll v = n;
    ll h = 0;
    rep(i,m){
        ll k = a[i]-h;
        h = b[i];
        v -= k;
        if(v <= 0){
            cout << "No" << endl;
            return 0;
        }
        v += b[i]-a[i];
        if(v > n) v = n;
    }
    ll u = t-b[m-1];
    v -= u;
    if(v > 0){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;
}