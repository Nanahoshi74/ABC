#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
//using mint = modint1000000007;
// using mint = modint;  /*このときmint::set_mod(mod)のようにしてmodを底にする*/
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define repi(i,a,b) for(ll i = a; i <= (ll)(b); i++)
#define rng(i,a,b) for(ll i = a; i < (ll)(b); i++)
#define rrng(i,a,b) for(ll i = a; i >= (ll)(b); i--)
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define ret(x) { cout<<(x)<<endl;}
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
ll mul(ll a, ll b) { if (a == 0) return 0; if (LINF / a < b) return LINF; return min(LINF, a * b); }
ll mod(ll x, ll y){return (x % y + y) % y;}
char itoc(int x){return x + '0';}
int ctoi(char c){return c - '0';}
void chmin(ll& x,ll y){x = min(x,y);}
void chmax(ll& x,ll y){x = max(x,y);}
ll getnum(ll x, ll y, ll H, ll W) { (void) H; return (x * W + y);}
template<typename T>
void print(vector<T> &p){rep(i,si(p)) cout << p[i] << " "; cout << endl;}
ll ceil(ll x , ll y){return (x+y-1)/y;}

int main(){

    ll n;
    cin >> n;
    vector<vector<ll>> g(n);
    vector<ll> v;
    rep(i,n-1){
        ll a,b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
        if(a == 0){
            v.push_back(b);
        }
    }

    // if(si(g[0]) == 1){
    //     cout << 1 << endl;
    //     return 0;
    // }

    vector<bool> seen(n,false);

    vector<ll> subtree(n, 0);
    ll ans = 0;

    auto dfs = [&](auto dfs, ll v, ll p) -> void{
        seen[v] = true;
        
        for(auto next_v : g[v]){
            if(next_v == p){
                continue;
            }
            dfs(dfs, next_v, v);
        }
        subtree[v] = 1;
        for(auto next_v : g[v]){
            if(next_v == p) continue;
            subtree[v] += subtree[next_v];
            // if(v == 0){
            //     chmin(ans,subtree[v]);
            // }
        }
    };

    dfs(dfs, 0, -1);

    vector<ll> u;

    rep(i,si(v)){
        u.push_back(subtree[v[i]]);
    }
    sort(all(u));
    rep(i,si(u)-1){
        ans += u[i];
    }

    cout << ans + 1 << endl;

    return 0;
}