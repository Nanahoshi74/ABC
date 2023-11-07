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

    ll w,h;
    cin >> w >> h;
    ll n;
    cin >> n;
    vector<P> pa(n);
    rep(i,n){
        cin >> pa[i].first >> pa[i].second;
    }
    ll la;
    cin >> la;
    vector<ll> a(la);
    rep(i,la){
        cin >> a[i];
    }
    a.pb(w);
    sort(all(a));
    ll lb;
    cin >> lb;
    vector<ll> b(lb);
    rep(i,lb){
        cin >> b[i];
    }
    b.pb(h);
    sort(all(b));
    //cout << si(b) << endl;

    ll u = 0,v = 0;
    map<P,ll> mp;
    rep(i,n){
        ll lx = *upper_bound(all(a),pa[i].first);
        ll ly = *upper_bound(all(b),pa[i].second);
        // st.insert(lx);
        // tt.insert(ly);
        mp[pair(ly,lx)]++;
    }
    ll m = INF,M = -1;
    for(auto p : mp){
        if(m >= p.second){
            m = p.second;
        }
        if(M <= p.second){
            M = p.second;
        }
    }
    // a.pop_back();
    // b.pop_back();
    // rep(i,la){
    //     if(!st.count(a[i])){
    //         m = 0;
    //     }
    // }
    // rep(i,lb){
    //     if(!tt.count(b[i])){
    //         m = 0;
    //     }
    // }
    if(si(mp) != (la+1)*(lb+1)) m = 0;

    cout << m << " " << M << endl;
    

    return 0;
}