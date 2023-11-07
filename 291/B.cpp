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

    ll n;
    cin >> n;
    vector<ll> a(5*n);
    multiset<ll> st;
    rep(i,5*n){
        cin >> a[i];
        st.insert(a[i]);
    }

    double ans = 0;
    rep(i,n){
        ll p = *st.rbegin();
        st.erase(st.find(p));
    }
    rep(i,n){
        ll p = *st.begin();
        st.erase(st.find(p));
    }
    ll tmp = 0;
    for(auto u : st){
        tmp += u;
    }

    cout << fixed << setprecision(10) << tmp/ (3.0 * n) << endl;


    

    return 0;
}