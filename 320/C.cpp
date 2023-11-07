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
ll getnum(ll x, ll y, ll H, ll W) { return (x * W + y);}

int main(){

    ll n,m;
    cin >> n >> m;
    P p = {INF,INF};
    map<ll,P> ans;
    ans[0].first = 0,ans[0].second = 0;
    rep(i,m){
        ll a,b,x,y;
        cin >> a >> b >> x >> y;
        a--,b--;
        P z = {ans[a].first+x,ans[a].second+y};
        if(ans[b].first == INF && ans[b].second == INF){
            ans[b] = z;
        }
        else{
            if(z != ans[b]){
                cout << " undecidable" << endl;
                return 0;
            }
        }
    }

    rep(i,n){
        cout << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}