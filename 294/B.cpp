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

    ll h,w;
    cin >> h >> w;
    vector<vector<ll>> a(h,vector<ll>(w));
    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
        }
    }
    vector<string> s;
    rep(i,h){
        string t;
        rep(j,w){
            if(a[i][j] == 0){
                t.pb('.');
            }
            else{
                t.pb('A' + a[i][j]-1);
            }
        }
        s.pb(t);
    }
    rep(i,h){
        cout << s[i] << endl;
    }

    return 0;
}