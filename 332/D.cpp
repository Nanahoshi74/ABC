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

    ll h,w;
    cin >> h >> w;
    vector<vector<ll>> a(h,vector<ll>(w)),b(h,vector<ll>(w));
    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
        }
    }
    rep(i,h){
        rep(j,w){
            cin >> b[i][j];
        }
    }

    queue<vector<vector<ll>>> q;
    map<vector<vector<ll>>,ll> dist;
    auto push = [&](vector<vector<ll>> &s, ll d){
        //sにdの距離でいけるとき
        if(dist.count(s)) return;
        dist[s] = d;
        q.push(s);
    };

    push(a,0);
    while(!q.empty()){
        vector<vector<ll>> s = q.front();
        q.pop();
        ll d = dist[s];
        rep(i,h-1){
            vector<vector<ll>> ns = s;
            swap(ns[i],ns[i+1]);
            push(ns,d+1);    
        }
        rep(j,w-1){
            vector<vector<ll>> ns = s;
            rep(i,h){
                swap(ns[i][j], ns[i][j+1]);
            }
            push(ns, d+1);
        }
    }

    if(dist.count(b)) cout << dist[b] << endl;
    else cout << -1 << endl;
    

    return 0;
}