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

vector<ll> topo_sort(vector<vector<ll>> &g,vector<bool> &seen,ll v,ll n){
    vector<ll> ans;
    auto dfs = [&](auto dfs,ll u) -> void{
        if(seen[u]) return;
        seen[u] = true;
        for(auto next_u : g[u]){
            if(seen[next_u]){
                continue;
            }
            else{
                dfs(dfs,next_u);
            }
        }
        ans.push_back(u);
    };
    rep(i,n){
        dfs(dfs,i);
    }
    reverse(all(ans));
    return ans;
}



int main(){

    ll n;
    cin >> n;
    vector<vector<ll>> g(n);
    rep(i,n){
        ll c;
        cin >> c;
        rep(j,c){
            ll tmp;
            cin >> tmp;
            tmp--;
            g[i].push_back(tmp);
        }
    }
    vector<bool> seen(n,false);

    vector<ll> ans;

    auto dfs = [&](auto dfs,ll v) -> void{
        seen[v] = true;
        for(auto next_v : g[v]){
            if(seen[next_v]){
                continue;
            }
            else{
                dfs(dfs,next_v);
            }
        }  
        ans.push_back(v);
    };

    dfs(dfs,0);
    ans.pop_back();
    rep(i,si(ans)){
        cout << ans[i] + 1 << " ";
    }
    cout << endl;
   

    return 0;
}