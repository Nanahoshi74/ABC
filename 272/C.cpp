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
    ll cnt1 = 0, cnt2 = 0;
    vector<ll> p,q;
    rep(i,n){
        cin >> a[i];
        if(a[i] % 2 == 0){
            cnt1++;
            p.pb(a[i]);
        }
        else{
            cnt2++;
            q.pb(a[i]);
        }
    }
    sort(all(p));
    sort(all(q));
    ll u = -LINF, v = -LINF;
    if(cnt1 >= 2 ){
        u = p[si(p)-1] + p[si(p)-2];
    }
    if(cnt2 >= 2){
        v = q[si(q)-1] + q[si(q)-2];
    }
    if(cnt1 >= 2 || cnt2 >= 2){
        cout << max(u,v) << endl;
        return 0;
    }
    cout << -1 << endl;

    return 0;
}