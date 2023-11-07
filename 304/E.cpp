#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
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
    dsu d(n);

    rep(i,m){
        ll a,b;
        cin >> a >> b;
        a--,b--;
        d.merge(a,b);
    }
    ll k;
    cin >> k;
    vector<ll> x(k),y(k);
    set<P> st;
    
    rep(i,k){
        ll a,b;
        cin >> a >> b;
        a--,b--;
        a = d.leader(a);
        b = d.leader(b);
        if(a > b) swap(a,b);
        st.emplace(a,b);
    }
    ll Q;
    cin >> Q;
    rep(i,Q){
        ll p,q;
        cin >> p >> q;
        p--,q--;
        p = d.leader(p);
        q = d.leader(q);
        if(p > q) swap(p,q);
        if(st.count(P(p,q))) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

    return 0;
}