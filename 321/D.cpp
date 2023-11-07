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
void chmin(ll& x,ll y){x = min(x,y);}
void chmax(ll& x,ll y){x = max(x,y);}
ll getnum(ll x, ll y, ll H, ll W) { (void) H; return (x * W + y);}
template<typename T>
void print(vector<T> &p){rep(i,si(p)) cout << p[i] << " "; cout << endl;}

int main(){

    ll n,m,p;
    cin >> n >> m >> p;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    vector<ll> b(m);
    rep(i,m){
        cin >> b[i];
    }
    sort(all(b));
    vector<ll> rui(m);
    rui[0] = b[0];
    rng(i,1,m){
        rui[i] = rui[i-1] + b[i]; 
    }

    // print(rui);

    // ll sum = accumulate(all(b),0);

    ll ans = 0;

    rep(i,n){
        ll tmp = 0;
        auto it = upper_bound(all(b),p-a[i]);
        // cout << it-b.begin() << endl;
        ll cnt = b.end()-upper_bound(all(b),p-a[i]);
        // ret(cnt);
        // return 0;
        // ret(cnt);
        if(cnt == 0){
            tmp = a[i] * m + rui[m-1];
        }
        else{
            ll ind = it-b.begin()-1;
            if(ind >= 0) tmp = a[i] * (ind+1) + rui[ind] + cnt * p;
            else tmp = p * m;
        }
        ans += tmp;
    }

    cout << ans << endl;

    return 0;
}