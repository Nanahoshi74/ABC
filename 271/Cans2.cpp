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
#define ret(x) { cout<<(x)<<endl; return;}
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
    rep(i,n){
        cin >> a[i];
        st.insert(a[i]);
    }
    sort(all(a));
    ll m;
    ll l = 0, r = n+1;
    while(r > l+1){
        m = (l + r)/2;
        ll c = 0;
        for(auto &p : st){
            if(p <= m){
                c++;
            }
        }
        if(c + (n-c)/2 >= m){
            l = m;
        }
        else{
            r = m;
        }
        cout << l << " " << m << " " << r << " " << c <<endl;
    }

    cout << l << endl;


    return 0;
}