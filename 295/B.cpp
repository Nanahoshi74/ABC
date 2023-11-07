#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i >= (int)(b); i--)
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

int main(){

    ll r,c;
    cin >> r >> c;
    vector<vector<char>> b(r,vector<char>(c));
    rep(i,r){
        rep(j,c){
            cin >> b[i][j];
        }
    }
    rep(i,r){
        rep(j,c){
            if(b[i][j] != '.' && b[i][j] != '#'){
                string s;
                s += b[i][j];
                ll num = stoll(s);
                rep(li,r){
                    rep(lj,c){
                        if(abs(i-li) + abs(j-lj) <= num){
                            if(b[li][lj] == '.' || b[li][lj] == '#'){
                                b[li][lj] = '.';
                            }
                        }
                    }
                }
                b[i][j] = '.';
            }
        }
    }

    rep(i,r){
        rep(j,c){
            cout << b[i][j];
        }
        cout << endl;
    }

    return 0;
}