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

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    if(abs(*max_element(all(a))-*min_element(all(a))) <= 1){
        cout << 0 << endl;
        return 0;
    }
    ll sum = 0;
    rep(i,n){
        sum += a[i];
    }
    ll num = sum/si(a);
    ll mi = *min_element(all(a));
    ll ma = *max_element(all(a));

    ll l = 0,r = 1e18;
    while(l + 1 < r){
        ll m = (l+r)/2;
        ll tmp = 0;
        rep(i,n){
            tmp += m-a[i];
        }
        if(tmp == 0){
            ll an = 0;
            rep(i,n){
                if(m-a[i] > 0){
                    an += m-a[i];
                }
            }
            cout << an << endl;
            return 0;
        }
        else if(tmp > 0){
            r = m;
        }
        else{
            l = m+1;
        }
    }
    ll ans = 0;
    // map<ll,ll> mp;
    rep(i,n){
        if(l-a[i] > 0){
            ans += l-a[i];
        }
    }

    cout << ans << endl;





    return 0;
}