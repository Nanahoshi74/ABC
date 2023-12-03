#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
//using mint = modint1000000007;
// using mint = modint;  /*このときmint::set_mod(mod)のようにしてmodを底にする*/
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
void chmin(ll& x,ll y){x = min(x,y);}
void chmax(ll& x,ll y){x = max(x,y);}
ll getnum(ll x, ll y, ll H, ll W) { (void) H; return (x * W + y);}
template<typename T>
void print(vector<T> &p){rep(i,si(p)) cout << p[i] << " "; cout << endl;}
ll ceil(ll x , ll y){return (x+y-1)/y;}

class Edge {
    public:
        ll a,b,w;
        Edge(ll a = 0,ll b = 0,ll w = 0) : a(a),b(b),w(w) {}
};

int main(){

    ll n,m,k;
    cin >> n >> m >> k;

    vector<Edge> es;

    rep(i,m){
        ll u,v,w;
        cin >> u >> v >> w;
        u--,v--;
        es.emplace_back(u,v,w);
    }

    ll ans = LINF;

    auto dfs = [&](auto dfs, ll i,vector<ll> is) -> void {
        if(is.size() == n-1){
            dsu uf(n);
            bool ok = true;
            ll now = 0;
            for(auto ei : is){
                auto e = es[ei];
                if(uf.same(e.a,e.b)) ok = false;
                uf.merge(e.a,e.b);
                now = (now + e.w) % k;
            }
            if(ok) chmin(ans,now);
            return;
        }
        if(i == m){
            return;
        }
        dfs(dfs,i+1,is);//選ばない場合
        is.push_back(i);
        dfs(dfs,i+1,is);//選んだ場合
    };

    dfs(dfs,0,{});

    cout << ans << endl;



    return 0;
}