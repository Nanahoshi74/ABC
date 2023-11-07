#include <bits/stdc++.h>
//#include <atcoder/all>
//using namespace atcoder;
//using mint = modint998244353;
//using mint = modint1000000007;
// using mint;  /*このときmint::set_mod(mod)のようにしてmodを底にする*/
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i >= (int)(b); i--)
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define ret(x) { cout<<(x)<<endl;}
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
ll mul(ll a, ll b) { if (a == 0) return 0; if (LINF / a < b) return LINF; return min(LINF, a * b); }
ll mod(ll x, ll y){return (x % y + y) % y;}
char itoc(int x){return x + '0';}
int ctoi(char c){return c - '0';}

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(n),b(m);
    ll ma = 0;
    rep(i,n){
        cin >> a[i];
        ma = max(a[i],ma);
    }
    rep(i,m){
        cin >> b[i];
        ma = max(b[i],ma);
    }

    ll l = 1, r = ma + 10;
    while(l < r){
        ll mi = (l + r)/2;
        ll u = 0,v = 0;
        rep(i,n){
            if(a[i] <= mi){
                u++;
            }
        }
        rep(i,m){
            if(b[i] >= mi){
                v++;
            }
        }
        if(u < v){
            l = mi + 1;
        }
        else{
            r = mi;
        }
    }
    // ll u = 0,v = 0;
    // ll u2 = 0,v2 = 0;
    // rep(i,n){
    //     if(a[i] <= l){
    //         u++;
    //     }
    //     if(a[i] <= r){
    //         u2++;
    //     }
    // }
    // rep(i,m){
    //     if(b[i] >= l){
    //         v++;
    //     }
    //     if(b[i] >= r){
    //         v2++;
    //     }
    // }
    // if(u >= v){
    //     cout << l << endl;
    //     return 0;
    // }
    // if(u2 >= v2){
    //     cout << r << endl;
    //     return 0;
    // }

    // ll ans = l;
    // ll u = 0,v = 0;
    // ans--;
    // rep(i,n){
    //     if(a[i] <= ans){
    //         u++;
    //     }
    // }
    // rep(i,m){
    //     if(b[i] >= ans){
    //         v++;
    //     }
    // }
    // if(u >= v){
    //     cout << ans << endl;
    //     return 0;
    // }
    // ans = l;
    // ans++;
    // u = 0,v = 0;
    // rep(i,n){
    //     if(a[i] <= ans){
    //         u++;
    //     }
    // }
    // rep(i,m){
    //     if(b[i] >= ans){
    //         v++;
    //     }
    // }
    // if(u < v){
    //     ans++;
    // }
    // else{
    //     ans--;
    // }
    // cout << ans << endl;

    // // rep(i,10){
    // //     bool ok = true;
    // //     ll u = 0,v = 0;
    // //     rep(j,n){
    // //         if(a[j] <= l){
    // //             u++;
    // //         }
    // //         else{
    // //             ok = false;
    // //         }
    // //     }
    // //     rep(j,m){
    // //         if(a[j] >= l){
    // //             v++;
    // //         }
    // //         else{
    // //             ok = false;
    // //         }
    // //     }
    // //     if(u >= v){
    // //         ans = l-1;
    // //     }
    // //     else{
    // //         break;
    // //     }
    // // }
    // // // ret(ans);
    // // rep(i,10){
    // //     bool ok = true;
    // //     rep(j,n){
    // //         if(a[j] > ans){
    // //             ok = false;
    // //         }
    // //     }
    // //     if(!ok){
    // //         ans = ans + 1;
    // //     }
    // //     else{
    // //         break;
    // //     }
    // // }

    cout << l << endl;

    return 0;
}