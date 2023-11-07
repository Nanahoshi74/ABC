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
 
    ll n,m,d;
    cin >> n >> m >> d;
    vector<ll> a(n),b(m);
    rep(i,n){
        cin >> a[i];
    }
    rep(i,m){
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    ll ans = -1;
    rep(i,m){
        bool ok = false;
        ll l = -1, r = n;
        while(l + 1 < r){
            ll mid = (l + r)/2;
            if(b[i] + d >= a[mid]){
                l = mid;
                ok = true;
            }
            else{
                r = mid;
            }
        }
        if(a[l] >= b[i] - d && ok){
            ans = max(ans,a[l] + b[i]);
        }
    }
    cout << ans << endl;
 
 
    return 0;
}