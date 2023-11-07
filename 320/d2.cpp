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
void chmin(ll& x,ll y){x = min(x,y);}
void chmax(ll& x,ll y){x = max(x,y);}
ll getnum(ll x, ll y, ll H, ll W) { return (x * W + y);}

int main(){

    ll n,m;
    cin >> n >> m;
    P p = {INF,INF};
    bool ok = false;
    map<ll,P> ans;
    rep(i,n){
        ans[i] = p;
    }
    ans[0].first = 0,ans[0].second = 0;
    vector<bool> check(n,true);
    rep(i,m){
        ll a,b,x,y;
        cin >> a >> b >> x >> y;
        a--,b--;
        // cout << i << " " << ans[a].first << " " << ans[b].first << endl;
        if(ans[a] != p && ans[b] == p){
            P z = {ans[a].first + x,ans[a].second + y};
            ans[b] = z;
            check[a] = false,check[b] = false;
        }
        else if(ans[a] == p && ans[b] != p){
            P z = {ans[b].first + (-x),ans[b].second + (-y)};
            ans[a] = z;
            check[a] = false,check[b] = false;
        }
        else if(ans[a] == p && ans[b] == p){
            continue;
        }
        else{
            P z = {ans[a].first + x,ans[a].second + y};
            P q = {ans[b].first + (-x),ans[b].second + (-y)};
            if(z == ans[b] && q == ans[a]){
                check[a] = false,check[b] = false;
            }
            else{
                continue;
            }
        }
    }

    // rep(i,si(check)){
    //     cout << check[i] << endl;
    // }

    rep(i,n){
        if(ans[i] != p) cout << ans[i].first << " " << ans[i].second << endl;
        if(check[i]) cout << "undecidable" << endl;
    }

    return 0;
}
