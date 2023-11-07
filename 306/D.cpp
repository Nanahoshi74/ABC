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

int main(){

    ll n;
    cin >> n;
    vector<ll> x(n),y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }

    vector<vector<ll>> dp(2,vector<ll>(n+2,0));
    dp[0][0] = 0;
    dp[1][0] = 0;
    rng(i,1,n+1){
        rng(j,0,1){
            if(x[i-1] == 0){
                dp[j][i] = max(dp[j][i-1] + y[i-1],dp[j+1][i-1] + y[i-1]);
                dp[j][i] = max(dp[j][i-1],dp[j][i]);
                dp[j+1][i] = dp[j+1][i-1];
            }
            else{
                dp[j+1][i] = max(dp[j][i-1] + y[i-1],dp[j+1][i-1]);
                dp[j][i] = dp[j][i-1];
            }
        }
    }

    // rep(i,2){
    //     rep(j,n+2){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << max(dp[0][n],dp[1][n]) << endl; 

    return 0;
}