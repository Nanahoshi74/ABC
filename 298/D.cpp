#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
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

    ll q;
    cin >> q;

    deque<ll> s(1,1);
    mint ans = 1;

    rep(i,q){
        ll t;
        cin >> t;
        if(t == 1){
            ll x;
            cin >> x;
            s.pb(x);
            ans = ans*10 + x;
        }
        else if(t == 2){
            ans -= mint(10).pow(si(s)-1) * s.front();
            s.pop_front();
        }
        else{
            cout << ans.val() << endl;
        }
    }

    return 0;
}