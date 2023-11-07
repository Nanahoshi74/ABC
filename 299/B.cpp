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

    ll n,t;
    cin >> n >> t;
    vector<ll> c(n),r(n);
    rep(i,n){
        cin >> c[i];
    }
    rep(i,n){
        cin >> r[i];
    }
    set<ll> st;
    rep(i,n){
        if(c[i] == t){
            st.insert(i);
        }
    }
    set<ll> p;
    if(si(st) == 0){
        rep(i,n){
            if(c[i] == c[0]){
                p.insert(i);
            }
        }
        ll ans = 0;
        ll ma = -1;
        for(auto x : p){
            if(ma < r[x]){
                ans = x;
                ma = r[x];
            }
        }
        cout << ans + 1 << endl;
        return 0;
    }
    else{
        ll ans = 0;
        ll ma = -1;
        for(auto x : st){
            if(ma < r[x]){
                ans = x;
                ma = r[x];
            }
        }
        cout << ans + 1 << endl;
        return 0;
    }

    return 0;
}