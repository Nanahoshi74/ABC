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

int op(int a, int b){
    //2つの要素をとってきた時にどう計算した結果を返すか
    return max(a, b);
}
int e(){
    //空っぽのものの値をどうするか
    return 0;
}

int main(){

    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    const int M = 500005;
    segtree<int, op, e> dp(M);
    rep(i,n){
        int l = a[i]-d, r = a[i] + d+1;
        l = max(0, l);
        r = min(r, M);
        int now = dp.prod(l,r) + 1;
        cout << dp.prod(l, r) << endl;
        dp.set(a[i], now);
    }
    int ans = dp.prod(0, M);
    cout << ans << endl;

    return 0;
}