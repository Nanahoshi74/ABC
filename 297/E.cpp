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

void push(set<ll> *st,vector<ll> a,ll n,ll x){
    rep(i,n){
        ll y = x + a[i];
        st -> insert(y);
    }
}

int main(){

    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    set<ll> st;
    push(&st,a,n,0);

    rep(i,k-1){
        ll x = *st.begin();
        st.erase(x);
        push(&st,a,n,x);
    }

    ll ans = *st.begin();
    cout << ans << endl;



    return 0;
}