#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)b; i--)
#define pb push_back
#define em emplace_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;

int main(){

    ll n,q;
    cin >> n >> q;
    vector<vector<ll>> a;
    rep(i,n){
        ll l;
        cin >> l;
        vector<ll> b(l);
        //a[i].resize(l);
        rep(j,l){
            cin >> b[j];
        }
        a.pb(b);
    }
    rep(i,q){
        ll u,v;
        cin >> u >> v;
        u--,v--;
        cout << a[u][v] << endl;
    }

    return 0;
}