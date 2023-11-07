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
    ll x;
    vector<ll> c(n);
    vector<vector<ll>> a;
    rep(i,n){
        cin >> c[i];
        vector<ll> p(c[i]);
        rep(j,c[i]){
            cin >> p[j];
        }
        a.push_back(p);
    }
    cin >> x;
    vector<P> ans;
    rep(i,n){
        rep(j,c[i]){
            if(a[i][j] == x){
                ans.emplace_back(c[i],i+1);
            }
        }
    }
    if(si(ans) == 0){
        cout << 0 << endl;
        cout << endl;
        return 0;
    }
    else{
        sort(all(ans));
        ll x = ans[0].first;
        ll cnt = 0;
        rep(i,si(ans)){
            if(ans[i].first == x) cnt++;
            else break;
        }
        cout << cnt << endl;
        rep(i,cnt){
            if(ans[i].first == x) cout << ans[i].second << " ";
            else break;
        }
        cout << endl;
    }


    return 0;
}