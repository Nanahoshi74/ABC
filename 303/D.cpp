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

    ll x,y,z;
    cin >> x >> y >> z;
    // cout << x << " " << y << " " << z << endl;

    string s;
    cin >> s;
    ll n = si(s);

    vector<vector<ll>> dp(2,vector<ll>(n));
    if(s[0] == 'A'){
        dp[0][0] = z + x;
        dp[1][0] = y;
    }
    else{
        dp[0][0] = z + y;
        dp[1][0] = x;
    }
    rng(i,1,n){
        if(s[i] == 'A'){
           dp[0][i] = min(dp[0][i-1] + x,dp[1][i-1] + z + x);
           dp[1][i] = min(dp[0][i-1] + z + y,dp[1][i-1] + y);
        }
        else{
            dp[0][i] = min(dp[0][i-1] + y,dp[1][i-1] + z + y);
            dp[1][i] = min(dp[0][i-1] + z + x,dp[1][i-1] + x);
        }
    }
    cout << min(dp[0][n-1],dp[1][n-1]) << endl;
    // rep(i,2){
    //     rep(j,n){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    return 0;
}