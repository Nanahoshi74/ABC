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
map<ll,bool> mp;
map<ll,ll> p;

ll f(ll n){
    if(n == 0){
        p[0] = 1;
        mp[0] = true;
        return 1;
    }
    else if(mp[n]){
      return p[n];
    }
    else{
        mp[n] = true;
       // mp[n] = true;
        ll u = f(n/2);
        ll v = f(n/3);
        p[n] = u+v;
        return u + v;
    }
}


int main(){

    ll n;
    cin >> n;

    cout << f(n) << endl;

    return 0;
}