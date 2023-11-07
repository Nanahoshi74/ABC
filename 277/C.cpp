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
ll ans = 0;

void dfs(vector<vector<ll>> &G,vector<bool>&seen,ll v,map<ll,ll> &mp,map<ll,ll> &f){
    seen[v] = true;
    if(ans < f[v]){
        ans = f[v];
    }
    for(auto next_v : G[v]){
        if(seen[next_v]){
            continue;
        }
        dfs(G,seen,next_v,mp,f);
    }
}

int main(){

    ll n;
    cin >> n;
    unordered_set<ll> st;
    map<ll,ll> mp;
    map<ll,ll> f;
    ll p = 0;
    vector<ll> a(n),b(n);
    rep(i,n){
        cin >> a[i] >> b[i];
        a[i]--, b[i]--;
        if(!st.count(a[i])){
            st.insert(a[i]);
            mp[a[i]] = p;
            f[p] = a[i];
            p++;
        }
        if(!st.count(b[i])){
            st.insert(b[i]);
            mp[b[i]] = p;
            f[p] = b[i];
            p++;
        }
    }
    vector<vector<ll>> G(si(st));
    vector<bool> seen(si(st),false);
    rep(i,n){
        G[mp[a[i]]].pb(mp[b[i]]);
        G[mp[b[i]]].pb(mp[a[i]]);
    }
    if(!st.count(0)){
        cout << 1 << endl;
        return 0;
    }
    dfs(G,seen,mp[0],mp,f);
    cout << ans +1 << endl;


    return 0;
}