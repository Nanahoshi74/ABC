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

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(m),b(m);
    rep(i,m){
        cin >> a[i] >> b[i];
        a[i]--,b[i]--;
    }

    vector<vector<ll>> g(n);
    rep(i,m){
        g[b[i]].push_back(a[i]);
    }
    vector<ll> li;
    unordered_set<ll> st,pp;
    rep(i,m){
        st.insert(a[i]);
        pp.insert(b[i]);
    }
    rep(i,n){
        if(!st.count(i)){
            li.push_back(i);
        }
    }
    vector<ll> s;
    rep(i,n){
        if(!pp.count(i)){
            s.push_back(i);
        }
    }
    if(si(s) >= 2){
        cout << -1 << endl;
        return 0;
    }
    else{
        cout << s[0] + 1 << endl;
    }


    return 0;
}