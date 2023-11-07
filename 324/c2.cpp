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


int main(){

    ll n;
    string t1;
    cin >> n >> t1;
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
    }
    vector<ll> ans;
    rep(i,n){
        if(s[i] == t1){
            ans.push_back(i);
            continue;
        }
        bool ok = false;
        for(char c = 'a'; c <= 'z'; c++){
            string z = {c};
            z += s[i];
            if(z == t1){
                ok = true;
                break;
            }
        }
        if(ok){
            ans.push_back(i);
            continue;
        }
        rep(j,si(s[i])){
            string z = s[i].substr(0,j+1);
            string q = z;
            // if(i == 0 && j == 1) cout << z << endl;
            for(char c = 'a'; c <= 'z'; c++){
                z += c;
                // if(i == 0 && j == 1) cout << z << endl;
                if(j == si(s[i])-1){
                    if(z == t1){
                        ok = true;
                        break;
                    }
                }
                // if(i == 0 && c == 'c' && j == 1){
                //     cout << "-----------" << " " << z << endl;
                //     cout << si(z) << endl;
                //     cout << c << endl;
                // }
                string v = s[i].substr(j+1);
                z += v;
                if(z == t1){
                    ok = true;
                    break;
                }
                z = q;
            }
        }
        rep(j,si(s[i])){
            if(j == 0){
                string z = s[i].substr(1);
                if(z == t1){
                    ok = true;
                    break;
                }
            }
            else if(j == si(s[i])-1){
                string z = s[i];
                z.pop_back();
                if(z == t1){
                    ok = true;
                    break;
                }
            }
            else{
                string z = s[i].substr(0,j);
                string v = s[i].substr(j+1);
                z += v;
                if(z == t1){
                    ok = true;
                    break;
                }
            }
        }
        if(ok){
            ans.push_back(i);
            continue;
        }
        rep(j,si(s[i])){
            string z = s[i];
            for(char c = 'a'; c <= 'z'; c++){
                z[j] = c;
                if(z == t1){
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }
        if(ok){
            ans.push_back(i);
        }
    }

    cout << si(ans) << endl;

    rep(i,si(ans)){
        cout << ans[i] + 1 << " ";
    }

    return 0;
}