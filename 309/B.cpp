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

    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
    }
    char ans[n][n];
    // rep(i,n){
    //     rep()
    // }
    rep(i,n){
        rep(j,n){
            if(i == 0 && j != 0){
                ans[i][j] = s[i][j-1];
            }
            else if(i == 0 && j == 0){
                ans[i][j] = s[i+1][j];
            }
            else if(j == n-1 && i != 0){
                ans[i][j] = s[i-1][j];
            }
            else if(i == n-1 && j != n-1){
                ans[i][j] = s[i][j+1];
            }
            else if(j == 0 && i != 0 && i != n-1){
                ans[i][j] = s[i+1][j];
            }
            else{
                ans[i][j] = s[i][j];
            }
        }
    }
    rep(i,n){
        rep(j,n){
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}