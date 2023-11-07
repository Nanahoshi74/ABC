#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
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
void chmin(ll& x,ll y){x = min(x,y);}
void chmax(ll& x,ll y){x = max(x,y);}
ll getnum(ll x, ll y, ll H, ll W) { (void) H; return (x * W + y);}
template<typename T>
void print(vector<T> &p){rep(i,si(p)) cout << p[i] << " "; cout << endl;}
ll a,b,c,n;
vector<vector<ll>> d(n,vector<ll>(n));
vector<pair<ll,ll>> g[10000009];

vector<ll> dik(ll s,ll e,bool v){
    priority_queue<P,vector<P>,greater<P>> q;
    vector<ll> cur(n,INF);
    vector<bool> kakutei(n,false);
    cur[s] = d[s][s];
    q.push(pair(cur[s],s));

    while(!q.empty()){
        ll pos = q.top().second;
        q.pop();
        if(kakutei[pos]){
            continue;
        }
        kakutei[pos] = true;
        for(int i = 0; i < g[pos].size(); i++){
            ll nex = g[pos][i].first;
            ll cost = 0;
            if(v){
                cost = g[pos][i].second * a;
            }
            else{
                cost = g[pos][i].second * b + c;
            }
            if(cur[nex] > cur[pos] + cost){
                cur[nex] = cur[pos] + cost;
                q.push(make_pair(cur[nex],nex));
            }
        }
    }
    vector<ll> ans;
    ll place = e;

    while(true){
        ans.push_back(place);
        if(place == s) break;
        rep(i,si(g[place])){
            ll next = g[place][i].first;
            ll cost = 0;
            if(v){
                cost = g[place][i].second * a;
            }
            else{
                cost = g[place][i].second * b + c;
            }
            if(cur[next] + cost == cur[place]){
                place = next;
                break;
            }
        }
    }
    reverse(all(ans));
    return ans;
}

int main(){

    cin >> n >> a >> b >> c;

    rep(i,n){
        rep(j,n){
            cin >> d[i][j];
            g[i].push_back(make_pair(j,d[i][j]));
        }
    }

    vector<ll> path = dik(0,n-1,true);

    rep(i,si(path)){
        vector<ll> slie;
        rng(j,i,si(path)){
            slie.push_back(path[j]);
        }
        vector<ll> u = dik(path[i],n-1,false);
        if(slie != u){
            rng(j,i,si(path)){
                path[j] = slie[j];
            }
        }
    }

    ll ans = 0;

    rep(i,si(path)-1){
        ans += d[path[i]][path[i+1]];
    }

    cout << ans << endl;

    return 0;
}