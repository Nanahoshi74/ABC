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

ll n,m;

bool isvalid(int x, int y) {
    if(0 <= x && x < n && 0 <= y && y < m) {return true;}
    else {return false;}
}

int main(){

    // ll n,m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
    }
    vector<P> p;
    rep(i,n){
        rep(j,m){
            bool ok = true;
            rep(k,9){
                rep(u,9){
                    if(isvalid(i+k,j+u)){
                        if(k < 3 && u < 3){
                            if(s[i+k][j+u] != '#'){
                                ok = false;
                            }
                        }
                            if(k == 3 && u < 3){
                                if(s[i+k][j+u] != '.'){
                                    ok = false;
                                }
                            }
                            if(k < 4 && u == 3){
                                if(s[i+k][j+u] != '.'){
                                    ok = false;
                                }
                            }
                            if(k == 5 && u >= 5){
                                if(s[i+k][j+u] != '.'){
                                    ok = false;
                                }
                            }
                            if(k >= 6 && u == 5){
                                if(s[i+k][j+u] != '.'){
                                    ok = false;
                                }
                            }
                            if(k >= 6 && u >= 6){
                                if(s[i+k][j+u] != '#'){
                                    ok = false;
                                }
                            }
                    }
                    else{
                        ok = false;
                        break;
                    }
                }
                if(!ok){
                    break;
                }
            }
            if(ok){
                p.emplace_back(i+1,j+1);
            }
        }
    }

    sort(all(p));
    rep(i,si(p)){
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}