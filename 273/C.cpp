#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
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
    vector<ll> a(n);
    unordered_set<ll> st;
    map<ll,ll> mp;
    vector<ll> p;
    map<ll,ll> ans;
    rep(i,n){
        cin >> a[i];
        mp[a[i]]++;
    }
    rep(i,n){
        if(!st.count(a[i])){
            st.insert(a[i]);
            p.pb(a[i]);
        }
    }
    sort(all(p));
    ll len = si(p);
    rep(i,len){
        ans[len-i-1]++;
        ans[len-i-1] *= mp[p[i]];
    }
    
    rep(i,n){
        cout << ans[i] << endl;
    }

    return 0;
}