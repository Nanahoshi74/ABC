#include <bits/stdc++.h>
//#include <atcoder/all>
//using namespace atcoder;
//using mint = modint998244353;
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

vector<string> tate(vector<string> a,ll h,ll w){
    vector<string> ans;
    rng(i,1,h){
        ans.pb(a[i]);
    }
    ans.pb(a[0]);
    return ans;
}

vector<string> yoko(vector<string> a,ll h,ll w){
    vector<string> ans;
    rep(i,h){
        string z = a[i];
        char c = z[0];
        z.erase(z.begin());
        z.pb(c);
        ans.pb(z);
    }
    return ans;
}

int main(){

    ll h,w;
    cin >> h >> w;
    vector<string> a(h),b(h);
    ll c = 0,d = 0;
    rep(i,h){
        cin >> a[i];
    }
    rep(i,h){
        cin >> b[i];
    }
    ll limit = 0;
    rep(i,h){
        rep(j,w){
            if(a[i][j] == '#'){
                c++;
            }
            if(b[i][j] == '#'){
                d++;
            }
        }
    }
    ll u = 0;
    while(u != h){
        ll v = 0;
        vector<string> la = tate(a,h,w);
        a = la;
        u++;
        while(v != w){
            vector<string> lb = yoko(b,h,w);
            v++;
            b = lb;
            if(la == lb){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;



    return 0;
}