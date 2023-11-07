#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
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

ll n;

void dfs(vector<vector<ll>> &G,vector<bool> &seen,ll v,vector<ll>&ans){
    seen[v] = true;
    for(auto next_v : G[v]){
        if(seen[next_v]){
            continue;
        }
        ans[next_v] = ans[v] + 1;
        dfs(G,seen,next_v,ans);
    }
}

int main(){

    cin >> n;
    vector<bool> seen(2*n+2,false);
    vector<vector<ll>> G(2*n+2);
    vector<ll> ans(2*n+2,0);

    repi(i,1,n){
        ll a;
        cin >> a;
        G[a].pb(2*i);
        G[a].pb(2*i+1);
    }
    ans[1] = 0;
    dfs(G,seen,1,ans);
    repi(i,1,2*n+1){
        ret(ans[i]);
    }

    return 0;
}