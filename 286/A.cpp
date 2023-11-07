#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i >= (int)(b); i--)
#define pb push_back
#define em emplace_back
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


int main(){

    ll n,p,q,r,s;
    cin >> n >> p >> q >> r >> s;
    p--,q--,r--,s--;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    vector<ll> b,c;
    rng(i,p,q+1){
        b.pb(a[i]);
    }
    rng(i,r,s+1){
        c.pb(a[i]);
    }
    ll u = 0,v = 0;
    rep(i,n){
        if(i >= p && i <= q){
            a[i] = c[u];
            u++;
        }
        if(i >= r && i <= s){
            a[i] = b[v];
            v++;
        }
    }
    rep(i,n){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}