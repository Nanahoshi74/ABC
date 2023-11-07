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

vector<ll> dfs(vector<vector<ll>> &g,ll s){
    ll n = si(g);
    vector<ll> dist(n,-1);
    dist[s] = 0;

    stack<ll> st({s});
    //st.push(s);
    while(!st.empty()){
        ll v = st.top();
        st.pop();
        for(auto next_v : g[v]){
            if(dist[next_v] == -1){
                st.push(next_v);
                dist[next_v] = dist[v] + 1;
            }
        }
    }
    return dist;
}

int main(){

    ll n;
    cin >> n;

    vector<vector<ll>> g(n,vector<ll>(n));

    rep(i,n){
        ll a,b;
        cin >> a >> b;
        a--,b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    vector<ll> dist0 = dfs(g,0);
    ll mx = -1,mv = -1;
    rep(v,n){
        if(mx < dist0[v]){
            mx = dist0[v];
            mv = v;
        }
    }
    vector<ll> distmv = dfs(g,mv);
    map<ll,ll> mp;
    rep(i,si(distmv)){
        mp[distmv[i]]++;
    }
    vector<P> pa;
    for(auto p : mp){
        pa.emplace_back(p.first,-1*p.second);
    }
    sort(all(pa));
    cout << pa[0].first <<" " << -1pa[0].second << endl;




    
    return 0;
}