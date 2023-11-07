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

    ll n,q;
    cin >> n >> q;
    set<pair<ll,ll>> st;
    rep(i,q){
        ll t,a,b;
        cin >> t >> a >> b;
        a--, b--;
        if(t == 1){
            st.insert(pair(a,b));
        }
        else if(t == 2){
            st.erase(pair(a,b));
        }
        else{
            if(st.count(pair(a,b)) && st.count(pair(b,a))){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}