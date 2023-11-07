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
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    vector<ll> b(n);
    b[0] = a[0];
    rng(i,1,n){
        b[i] = b[i-1] + a[i];
    }
    ll k = t - b[n-1] * (t/b[n-1]);
    ll now = k;
    rep(i,n){
        if(now <= a[i]){
            cout << i + 1 << " " << now << endl;
            return 0;
        }
        else{
            now -= a[i];
        }
    }

    return 0;
}