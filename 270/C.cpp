#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
#define pb push_back
#define em emplace_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;

vector<ll> ans,path;
ll n,x,y;

void dfs(vector<vector<ll>> &G,vector<bool> &seen,ll v){
    if(v == y){
        ans = path;
        return;
    }
    seen[v] = true;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        path.pb(next_v);
        dfs(G,seen,next_v);
        path.pop_back();
    }
    return;
}

int main(){

    cin >> n >> x >> y;
    x--; y--;
    vector<vector<ll>> G(n);
    rep(i,n-1){
        ll a,b;
        cin >> a >> b;
        a--; b--;
        G[a].pb(b);
        G[b].pb(a);
    }
    vector<bool> seen(n,false);
    path.pb(x);
    dfs(G,seen,x);
    rep(i,si(ans)){
        cout << ans[i] + 1 << " ";
    }
    cout << endl;



    return 0;
}