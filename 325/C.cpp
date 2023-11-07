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

bool isvalid(int x, int y, int H, int W) {
    if(0 <= x && x < H && 0 <= y && y < W) {return true;}
    else {return false;}
}


int main(){

    ll h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h){
        cin >> s[i];
    }

    ll cnt = 0;

    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#') cnt++;
        }
    }

    dsu d(h*w);

    vector<ll> dx = {1,1,0,-1,-1,-1,0,1};
    vector<ll> dy = {0,-1,-1,-1,0,1,1,1};

    rep(i,h){
        rep(j,w){
            ll num1 = getnum(i,j,h,w);
            if(s[i][j] == '#'){
                rep(k,4){
                ll lx = i + dy[k];
                ll ly = j + dx[k];
                if(isvalid(lx,ly,h,w)){
                    ll num2 = getnum(lx,ly,h,w);
                    if(s[lx][ly] == '#'){
                        d.merge(num1,num2);                        
                    }
                }
               }
            }
        }
    }
    ll ans = 0;

    unordered_set<ll> st;

    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#'){
                st.insert(d.leader(getnum(i,j,h,w)));
            }
        }
    }



    cout << si(st) << endl;

    return 0;
}