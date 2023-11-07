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

bool isvalid(int x, int y, int H, int W) {
    if(0 <= x && x < H && 0 <= y && y < W) {return true;}
    else {return false;}
}

int main(){

    ll ha,wa;
    cin >> ha >> wa;
    vector<string> a(ha);
    set<P> sta,stb;
    rep(i,ha){
        cin >> a[i];
    }
    ll hb,wb;
    cin >> hb >> wb;
    vector<string> b(hb);
    rep(i,hb){
        cin >> b[i];
    }
    ll hx,wx;
    cin >> hx >> wx;
    vector<string> x(hx);
    rep(i,hx){
        cin >> x[i];
    }
    rep(i,ha){
        rep(j,wa){
            if(a[i][j] == '#'){
                sta.insert(pair(i,j));
            }
        }
    }
     rep(i,hb){
        rep(j,wb){
            if(b[i][j] == '#'){
                stb.insert(pair(i,j));
            }
        }
    }
    ll p = max(ha,hb);
    ll q = max(wa,wb);
    rep(i,ha + hb){
        rep(j,wa + wb){
            vector<string> ans(ha + hb);
            rep(k,ha + hb){
                ans[i].resize(wa + wb);
            }
            rep(k,ha + hb){
                rep(u,wa +wb){
                   ans[k][u] = '.'; 
                }
            }
            
        }
    }


    return 0;
}