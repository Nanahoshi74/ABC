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

    ll n,d,p;
    cin >> n >> d >> p;

    vector<ll> f(n);
    rep(i,n){
        cin >> f[i];
    }

    ll lp = 0,lq = 0;
    rep(i,n){
        lp += f[i];
    }
    sort(all(f));
    ll x = p/d;
    ll cnt = f.end()-lower_bound(all(f),x);//x以上
    // ret(cnt);
    ll v = cnt/d;//買う枚数
    lq += v * p;
    sort(rall(f));
    rep(i,n){
        if(v * d > i){
            continue;
        }
        else{
            lq += f[i];
        }
    }
    v = cnt/d + 1;
    ll llq = v*p;
    rep(i,n){
        if(v * d > i){
            continue;
        }
        else{
            llq += f[i];
        }
    }
    lq = min(llq,lq);    


   

    cout << min(lp,lq) << endl;

    return 0;
}