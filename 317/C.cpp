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

    ll n,m;
    cin >> n >> m;

    vector<ll> a(m),b(m),c(m);
    map<P,ll> mp;  
    rep(i,m){
        cin >> a[i] >> b[i] >> c[i];
        a[i]--;
        b[i]--;
        mp[pair(a[i],b[i])] = c[i];
        mp[pair(b[i],a[i])] = c[i];
    } 
    vector<ll> path(n);
    rep(i,n){
        path[i] = i;
    }
    sort(all(path));
    ll ans = 0;
    do{
        ll tmp = 0;
        bool ok = false;
        rep(i,si(path)-1){
            if(mp[pair(path[i+1],path[i])] == 0){
                ok = true;
                break;
            }
            if(!ok) tmp += mp[pair(path[i+1],path[i])];
            // tmp += mp[pair(path[i],path[i+1])];
        }
        ans = max(ans,tmp);
    }while(next_permutation(all(path)));

    cout << ans << endl;


    return 0;
}