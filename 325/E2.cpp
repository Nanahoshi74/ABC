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


int main(){

    ll n,a,b,c;
    cin >> n >> a >> b >> c;

    vector<vector<ll>> d(n,vector<ll>(n));
    rep(i,n){
        rep(j,n){
            cin >> d[i][j];
        }
    }

    auto dijk = [&](ll sv,ll b,ll c){
        vector<bool> kakutei(n,false);
        priority_queue<P,vector<P>,greater<P>> q;
        vector<ll> cur(n,LINF);
        cur[sv] = d[sv][sv];
        q.push(P(cur[sv],sv));
        while(!q.empty()){
            ll pos = q.top().second;
            q.pop();
            if(kakutei[pos]){
                continue;
            }
            kakutei[pos] = true;
            rep(i,n){
                if(i == pos) continue;
                ll nex = i;
                ll cost = d[pos][i] * b + c;
                if(cur[nex] > cur[pos] + cost){
                    cur[nex] = cur[pos] + cost;
                    q.push(P(cur[nex],nex));
                }
            }
        }
        return cur;
    };

    auto d1 = dijk(0,a,0);
    auto d2 = dijk(n-1,b,c);
    ll ans = LINF;
    rep(i,n){
        ans = min(ans,d1[i] + d2[i]);
    }

    cout << ans << endl;

    return 0;
}