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

    ll n,k,p;
    cin >> n >> k >> p;

    map<vector<ll>,ll> dp;
    dp[vector<ll>(k)] = 0;

    rep(i,n){
        ll c;
        vector<ll> a(k);
        cin >> c;
        rep(j,k){
            cin >> a[j];
        }
        auto old = dp;
        for(auto [_d,val] : old){
            vector<ll> d = _d;
            rep(j,k){
                d[j] = min(d[j] + a[j],p);
            }
            if(dp.count(d)) dp[d] = min(dp[d],val+c);
            else dp[d] = val + c;
        } 
    }

    vector<ll> t(k,p);
    if(dp.count(t)) cout << dp[t] << endl;
    else cout << -1 << endl;

    return 0;
}