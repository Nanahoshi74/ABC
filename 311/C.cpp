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

vector<ll> ans,path;
ll goal = 0;

void dfs(ll v,vector<bool> &seen,vector<vector<ll>>&g){
    seen[v] = true;
    for(auto next_v : g[v]){
        if(seen[next_v]){
            goal = v;
            return;
        }
        else{
            dfs(next_v,seen,g);
        }
    }
}

void keiro(vector<vector<ll>> &g,vector<bool>&seen,ll v,ll goal){
    seen[v] = true;
    for(auto next_v : g[v]){
        if(next_v == goal){
            ans = path;
            return;
        }
        path.push_back(next_v);
        keiro(g,seen,next_v,goal);
        path.pop_back();
    }
}

int main(){

    ll n;
    cin >> n;
    vector<ll> b(n);
    vector<vector<ll>> g(n);
    rep(i,n){
        cin >> b[i];
        b[i]--;
        g[i].push_back(b[i]);
    }
    vector<bool> seen(n,false);
    dfs(0,seen,g);
    path.push_back(goal);
    seen.assign(n,false);
    keiro(g,seen,goal,goal);
    cout << si(ans) << endl;
    rep(i,si(ans)){
        cout << ans[i] + 1 << " ";
    }
    cout << endl;

    return 0;
}