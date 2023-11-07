#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
#define pb push_back
#define em emplace_back
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

bool isvalid(int x, int y) {
    if(0 <= x && x < 9 && 0 <= y && y < 9) {return true;}
    else {return false;}
}

int main(){

    vector<string> s(9);
    rep(i,9){
        cin >> s[i];
    }
    ll ans = 0;
    rep(i,9){
        rep(j,9){
            if(s[i][j] == '#'){
                rng(k,1,9){
                    ll p = 0;
                    if(isvalid(i+k,j+k)){
                        if(s[i+k][j+k] == '#'){
                            p++;
                        }
                    }
                    if(isvalid(i+k,j)){
                        if(s[i+k][j] == '#'){
                            p++;
                        }
                    }
                    if(isvalid(i,j+k)){
                        if(s[i][j+k] == '#'){
                            p++;
                        }
                    }
                    if(p == 3){
                        ans++;
                    }
                }
                rng(k,1,9){
                    rng(u,1,9){
                        ll v = 0;
                        if(isvalid(i-k,j+u)){
                            if(s[i-k][j+u] == '#'){
                                v++;
                            }
                        }
                        if(isvalid(i+u,j+k)){
                            if(s[i+u][j+k] == '#'){
                                v++;
                            }
                        }
                        if(isvalid(i+u-k,j+u+k)){
                            if(s[i+u-k][j+k+u] == '#'){
                                v++;
                            }
                        }
                        if(v == 3){
                            ans++;
                        }
                    }
                }
            }
        }
    }

    ret(ans);


    return 0;
}