#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
//using mint = modint1000000007;
// using mint = modint;  /*このときmint::set_mod(mod)のようにしてmodを底にする*/
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

    vector<vector<ll>> a(9,vector<ll>(9));
    rep(i,9){
        rep(j,9){
            cin >> a[i][j];
        }
    }

    bool ok = true;

    rep(i,9){
        unordered_set<ll> st;
        rep(j,9){
            st.insert(a[i][j]);
        }
        if(si(st) != 9){
            ok = false;
        }
    } 

    rep(j,9){
        unordered_set<ll> st;
        rep(i,9){
            st.insert(a[i][j]);
        }
        if(si(st) != 9){
            ok = false;
        }
    }

    unordered_set<ll> sst;

    rep(i,3){
        rep(j,3){
            sst.insert(a[i][j]);
        }
    }
    if(si(sst) != 9){
        ok = false;
    }
    sst.clear();

    rep(i,3){
        rng(j,3,6){
            sst.insert(a[i][j]);
        }
    }
    if(si(sst) != 9) ok = false;
    sst.clear();

    rep(i,3){
        rng(j,6,9){
            sst.insert(a[i][j]);
        }
    }
    if(si(sst) != 9) ok = false;
    sst.clear();

    //0行目

    rng(i,3,6){
        rng(j,0,3){
            sst.insert(a[i][j]);
        }
    }
    if(si(sst) != 9) ok = false;
    sst.clear();

    rng(i,3,6){
        rng(j,3,6){
            sst.insert(a[i][j]);
        }
    }
    if(si(sst) != 9) ok = false;
    sst.clear();

    rng(i,3,6){
        rng(j,6,9){
            sst.insert(a[i][j]);
        }
    }
    if(si(sst) != 9) ok = false;
    sst.clear();

    //1行目

    rng(i,6,9){
        rng(j,0,3){
            sst.insert(a[i][j]);
        }
    }
    if(si(sst) != 9) ok = false;
    sst.clear();

     rng(i,6,9){
        rng(j,3,6){
            sst.insert(a[i][j]);
        }
    }
    if(si(sst) != 9) ok = false;
    sst.clear();

     rng(i,6,9){
        rng(j,6,9){
            sst.insert(a[i][j]);
        }
    }
    if(si(sst) != 9) ok = false;
    sst.clear();

    if(ok){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}