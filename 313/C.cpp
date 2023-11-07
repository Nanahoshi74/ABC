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

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    ll l = 0,r = 2000000000;
    while(l+1< r){
        ll m = l + (r-l)/2;
        ll h = 0,w = 0;
        rep(i,n){
            if(m-a[i] > 0){
                h += m-a[i];
            }
            else{
                w += a[i]-m;
            }
        }
        if(w-h <= 1){
            r = m;
        }
        else{
            l = m;
        }
    }

    ll ma = *max_element(all(a));

    ll ans = 10000000000000000;
    for(ll i = l-2; i <= r+2; i++){
        ll h = 0,w = 0;
        ll x = 0;
        rep(j,n){
            if(a[j]-i > 1){
                h += a[j]-i-1;
            }
            else{
                w += i-a[j];
            }
        }
        x = max(w,h);
        ans = min(ans,x);
    }
    cout << ans << endl;

    return 0;
}