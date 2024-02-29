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
ll ceilLL(ll x , ll y){return (x+y-1)/y;}
// 多倍長テンプレ
// /* ---------------------- ここから ---------------------- */
// #include <boost/multiprecision/cpp_dec_float.hpp>
// #include <boost/multiprecision/cpp_int.hpp>
// namespace mp = boost::multiprecision;
// // 任意長整数型
// using Bint = mp::cpp_int;
// // 仮数部が10進数で1024桁の浮動小数点数型(TLEしたら小さくする)
// using Real = mp::number<mp::cpp_dec_float<1024>>;
// /* ---------------------- ここまで ---------------------- */

ll nCk(ll a,ll b){
    ll p = 1;
    for(int i = 1; i <= b; i++){
        p *= a-i+1;
        p /= i;
    }
    return p;
}

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    ll ans = 0;
    rep(i,n){
        if(a[i] == 0){
            continue;
        }
        else{
            ll hi = 1;
            rng(j,1,LINF){
                if(j * j > a[i]) break;
                if(a[i] % (j*j) == 0){
                    hi = j;
                }
            }
            a[i] /= (hi * hi);
        }
    }
    // print(a);
    sort(all(a));

    map<ll,vector<ll>> mp;
    rep(i,n){
        mp[a[i]].push_back(i);
    }
    for(auto p : mp){
        if(p.first == 0){
            vector<ll> &z = p.second;
            for(auto li : z){
                ans += n-li-1;
            }
        }
        else{
            ll size = si(p.second);
            ans += nCk(size, 2);
        }
    }

    cout << ans << endl;

    



    return 0;
}