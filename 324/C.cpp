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

ll ham(string &s,string &t){
    if(s.size() != t.size()) return 999;
    ll res = 0;
    rep(i,si(s)){
        if(s[i] != t[i]) res++;
    }
    return res;
}

bool f(string &s,string &t){
    if(s.size() != t.size() + 1) return false;
    ll si = 0;
    rep(ti,si(t)){
        while(si < s.size() && s[si] != t[ti]) si++;
        if(si == s.size()) return false;
        si++;
    }
    return true;
}

int main(){

    ll n;
    string t;
    cin >> n >> t;
    vector<ll> ans;
    rep(i,n){
        string s;
        cin >> s;
        bool ok = false;
        if(s.size() + 1 >= t.size()){
            if(s == t) ok = true;
            if(f(s,t)) ok = true;
            if(f(t,s)) ok = true;
            if(ham(s,t) <= 1) ok = true;
        }
        if(ok) ans.push_back(i+1);
    }

    cout << si(ans) << endl;
    rep(i,si(ans)){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}