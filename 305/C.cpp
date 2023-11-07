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

ll h,w;

bool isvalid(int x, int y) {
    if(0 <= x && x < h && 0 <= y && y < w) {return true;}
    else {return false;}
}

int main(){

    cin >> h >> w;
    vector<string> s(h);
    rep(i,h){
        cin >> s[i];
    }

    rep(i,h){
        rep(j,w){
            ll cnt = 0;
            if(s[i][j] == '.'){
                if(isvalid(i+1,j)){
                    if(s[i+1][j] == '#'){
                        cnt++;
                    }
                }
                if(isvalid(i-1,j)){
                    if(s[i-1][j] == '#'){
                        cnt++;
                    }
                }
                if(isvalid(i,j+1)){
                    if(s[i][j+1] == '#'){
                        cnt++;
                    }
                }
                if(isvalid(i,j-1)){
                    if(s[i][j-1] == '#'){
                        cnt++;
                    }
                }
                if(cnt >= 2){
                    cout << i + 1 << " " << j + 1 << endl;
                }
            }
        }
    }

    return 0;
}