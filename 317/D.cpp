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

int main(){

    ll n;
    cin >> n;
    ll w = 0;
    vector<P> data;
    rep(i,n){
        ll x,y,z;
        cin >> x >> y >> z;
        ll a = max((ll)0,(y-x+1)/2);
        w += z;
        data.emplace_back(a,z*2);    
    }

    vector<vector<ll>> dp(n+1,vector<ll>(w+1,LINF));
    dp[0][0] = 0; 

    rep(i,n){
        auto [a,z] = data[i];
        rep(j,w+1){
            chmin(dp[i+1][j],dp[i][j]);
            chmin(dp[i+1][min(w,j+z)],dp[i][j]+a);
        }
    }

    ll ans = dp[n][w];
    cout << ans << endl;

    return 0;
}