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

int main() {
    string S;
    cin >> S;

    int x = 0;
    int n = S.length();

    // '?' の個数を数える
    for (char c : S) {
        if (c == '?') {
            x++;
        }
    }

    // dp[i][j] は i 個目までの文字列に含まれる '?' を '(' に置き換える場合の数
    vector<vector<mint>> dp(n + 1, vector<mint>(x + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= x; j++) {
            if (S[i] == '(' || S[i] == '?') {
                // '?' を '(' に置き換える場合
                dp[i + 1][j + 1] = (dp[i + 1][j + 1] + dp[i][j]);
            }

            if (S[i] == ')' || S[i] == '?') {
                // '?' を ')' に置き換える場合
                if (j > 0) {
                    dp[i + 1][j - 1] = (dp[i + 1][j - 1] + dp[i][j]);
                }
            }

            if (S[i] == '?') {
                // '?' を消費せずにスキップする場合
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]);
            }
        }
    }

    // 答えは '?' を全て '(' に置き換えた場合の数 (dp[n][0]) となる
    cout << dp[n][0].val() << endl;

    return 0;
}





