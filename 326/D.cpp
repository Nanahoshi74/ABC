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

int main(){

    ll n;
    cin >> n;
    string r,c;
    cin >> r;
    cin >> c;

    vector<string> s(n);
    rep(i,n){
       string t;
       rep(j,n){
        t += '.';
       }
       s[i] = t;
    }


    vector<char> d = {'A','B','C'}; 
    vector<string> h(5);
    h[0] = "AC..B";
    h[1] = ".BA.C";
    h[2] = "C.BA.";
    h[3] = "BA.C.";
    h[4] = "..CBA";

    rep(i,1 << n){
        rep(j,1 << n){
            vector<string> z = s;
            vector<string> prev_z = z;
            vector<ll> a;
            vector<ll> b;

            rep(k,n){
                if(i & (1 << k)) a.push_back(k);
            }
            rep(k,n){
                if(j & (1 << k)) b.push_back(k);
            }
            // sort(all(a));
            // sort(all(b));
            if(si(a) == 3 && si(b) == 3){
                // bool ok = true;
                do{
                    do{
                        bool ok = true;
                        z = prev_z;
                        unordered_set<ll> sa,sb;
                        rep(li,3){
                            sa.insert(a[li]);
                            sb.insert(b[li]);
                        }
                        rep(li,5){
                            rep(lj,5){
                                if(sa.count(li) && sb.count(lj)){
                                    z[li][lj] = min(li,lj);
                                }
                            }
                        }
                        // if(z == h){
                        //     cout << "yyyy" << endl;
                        //     return 0;
                        // }
                        rep(li,n){
                            rep(lj,n){
                                if(z[li][lj] != '.'){
                                    if(r[li] != z[li][lj]){
                                        ok = false;
                                    }
                                    else{
                                        break;
                                    }
                                }
                            }
                        }
                        rep(lj,n){
                            rep(li,n){
                                if(z[li][lj] != '.'){
                                    if(c[lj] != z[li][lj]){
                                        ok = false;
                                    }
                                    else{
                                        break;
                                    }
                                }
                            }
                        }
                        if(ok){
                            cout << "Yes" << endl;
                            rep(li,n){
                                cout << z[li] << endl;
                            }
                            return 0;
                        }
                        z = prev_z;
                    }while(next_permutation(all(a)));
                }while(next_permutation(all(b)));
            }
            else{
                continue;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}