#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
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
ll getnum(ll x, ll y, ll H, ll W) { (void) H; return (x * W + y);}
template<typename T>
void print(vector<T> &p){rep(i,si(p)) cout << p[i] << " "; cout << endl;}

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(m);
    rep(i,m){
        cin >> a[i];
    }
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
    }

    vector<P> pa(m);
    rep(i,m){
        pa[i].first = a[i];
        pa[i].second = i;
    }

    sort(rall(pa));

    vector<ll> score(n);

    rep(i,n){
        ll cnt = 0;
        rep(j,m){
            if(s[i][j] == 'o'){
                cnt += a[j];
            }
        }
        score[i] = cnt + (i+1);
    }
    ll ma = *max_element(all(score));
    rep(i,n){
        if(score[i] == ma){
            cout << 0 << endl;
            continue;
        }
        ll now = score[i];
        ll cnt = 0;
        rep(j,m){
            if(s[i][pa[j].second] != 'x') continue;
            now += pa[j].first;
            cnt++;
            if(now > ma){
                cout << cnt << endl;
                break;
            }
        }
    }

    return 0;
}