#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll h,w;
    cin >> h >> w;
    vector<vector<ll>> a(h,vector<ll>(w));
    ll ans = 0;
    ll p = 100000;
    vector<ll> k(103,0);
    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
            p = min(p,a[i][j]);
        }
    }
    rep(i,h){
        rep(j,w){
            ans += a[i][j]-p;
        }
    }

    

    cout << ans << endl;




    return 0;
}