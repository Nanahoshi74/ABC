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

ll ans = 0;

void dfs(ll v,vector<bool> &seen,vector<vector<ll>> &g,ll cnt,ll z){
    seen[v] = true;
    for(auto nv : g[v]){
        if(seen[nv]) continue;
        cnt++;
        if(cnt == z) return;
        dfs(nv,seen,g,cnt);
    }
}

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> p(n);
    map<ll,vector<ll>> mp;
     vector<vector<ll>> g(n);
    rng(i,1,n){
        cin >> p[i];
        mp[i].push_back(p[i]);
        g[p[i]].push_back(i);
    }
    vector<ll> x(n),y(n);

    // vector<P> pa(n);
    rep(i,m){
        cin >> x[i] >> y[i];
        // cin >> pa[i].first >> pa[i].second
        ll cnt = 0;
        vector<bool> seen(n,false);
        dfs(x[i],seen,g,cnt,y);
    }

    



    return 0;
}