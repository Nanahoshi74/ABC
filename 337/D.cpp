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

bool isvalid(ll x, ll y, ll H, ll W) {
    if(0 <= x && x < H && 0 <= y && y < W) {return true;}
    else {return false;}
}


int main(){

    ll h,w,k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h){
        cin >> s[i];
    }

    ll ans = LINF;
    vector<ll> x(w+1), d(w+1);
    x[0] = 0, d[0] = 0;
    rep(i,h){
        rng(j,1,w+1){
            x[j] = x[j-1];
            d[j] = d[j-1];
            if(s[i][j-1] == '.'){
                d[j]++;
            }
            else if(s[i][j-1] == 'x'){
                x[j]++;
            }
        }
        rng(j,1,w+1){
            if(j + k -1 > w){
                break;
            }
            if(x[j+k-1]-x[j-1] == 0){
                chmin(ans, d[j+k-1]-d[j-1]);
            }
        }
    }

    d.assign(h+1,0), x.assign(h+1,0);

    rep(j,w){
        rng(i,1,h+1){
            x[i] = x[i-1];
            d[i] = d[i-1];
            if(s[i-1][j] == '.'){
                d[i]++;
            }
            else if(s[i-1][j] == 'x'){
                x[i]++;
            }
        }
        rng(i,1,h+1){
            if(i + k -1 > h){
                break;
            }
            if(x[i+k-1]-x[i-1] == 0){
                chmin(ans, d[i+k-1]-d[i-1]);
            }
        }
    }

    

    if(ans == LINF){
        cout << -1 << endl;
        return 0;
    }

    cout << ans << endl;



    return 0;
}