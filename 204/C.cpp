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

ll ans = 0;

void dfs(vector<vector<ll>> &G,vector<bool> &seen,ll v){
    seen[v] = true;
    ans++;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        dfs(G,seen,next_v);
    }
}

int main(){

    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> G(n);
    rep(i,m){
        ll a,b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
    }
    rep(i,n){
        vector<bool> seen(n,false);
        dfs(G,seen,i);
    }
    cout << ans << endl;


    return 0;
}