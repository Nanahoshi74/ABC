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
void chmin(ll& x,ll y){x = min(x,y);}
void chmax(ll& x,ll y){x = max(x,y);}
ll getnum(ll x, ll y, ll H, ll W) { (void) H; return (x * W + y);}
template<typename T>
void print(vector<T> &p){rep(i,si(p)) cout << p[i] << " "; cout << endl;}
ll ceil(ll x , ll y){return (x+y-1)/y;}
ll cnt = 0;

int main(){

    ll n;
    cin >> n;
    string R,C;
    cin >> R;
    cin >> C;

    auto dfs = [&](auto dfs, char x, vector<string> s) -> bool {
        if(x == 'D'){
            string r,c;
            rep(i,n){
                rep(j,n){
                    if(s[i][j] != '.'){
                        r += s[i][j];
                        break;
                    }
                }
            }
            rep(j,n){
                rep(i,n){
                    if(s[i][j] != '.'){
                        c += s[i][j];
                        break;
                    }
                }
            }
            if(r == R && c == C){
                cout << "Yes" << endl;
                rep(i,n) cout << s[i] << endl;
                return true;
            }
            return false;
        }
        vector<ll> p(n);
        rep(i,n) p[i] = i;
        do{
            auto t = s;
            bool ok = true;
            rep(i,n){
                if(t[i][p[i]] != '.') ok = false;
                t[i][p[i]] = x;
            }
            cnt++;
            if(cnt < 5) rep(i,n){
                cout << t[i] << endl;
            }
            if(cnt < 5) cout << "******************" << endl;
            if(!ok) continue;
            if(dfs(dfs,x+1,t)) return true;
        }while(next_permutation(all(p)));
        return false;
    };
    vector<string> s(n,string(n,'.'));
    if(!dfs(dfs,'A',s)) cout << "No" << endl;

    return 0;
}