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
/* ---------------------- ここから ---------------------- */
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
// 任意長整数型
using Bint = mp::cpp_int;
// 仮数部が10進数で1024桁の浮動小数点数型(TLEしたら小さくする)
using Real = mp::number<mp::cpp_dec_float<1024>>;
/* ---------------------- ここまで ---------------------- */

bool isvalid(ll x, ll y, ll H, ll W) {
    if(0 <= x && x < H && 0 <= y && y < W) {return true;}
    else {return false;}
}

int main(){

    ll h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    rep(i,h){
        cin >> s[i];
    }

    ll ans = 0;

    rep(i,h){
        rep(j,w){
            if(s[i][j] == '.'){
                ll li = i, lj = j;
                bool ok = true;
                rep(k,n){
                    if(t[k] == 'L'){
                        lj--;
                        
                    }
                    else if(t[k] == 'R'){
                        lj++;
                    }
                    else if(t[k] == 'U'){
                        li--;
                    }
                    else{
                        li++;
                    }
                    if(!isvalid(li, lj, h, w) || s[li][lj] == '#'){
                        ok = false;
                    }
                }
                if(ok) ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}