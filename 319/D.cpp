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
ll getnum(ll x, ll y, ll H, ll W) { return (x * W + y + H-H);}

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }

    // ll sum = accumulate(all(a),0);

    ll l = 0,r = 1e15;

    while(abs(r-l) > 1){
        ll mid = (l+r)/2;
        ll cnt = 0;
        ll num = 1;
        bool ok = false;
        ll li = 0;
        while(li < n){
            if(cnt + a[li] > mid){
                if(cnt == 0){
                    ok = true;
                    break;
                }
                num++;
                cnt = 0;
            }
            else{
                cnt += a[li];
                if(cnt == mid || cnt == mid-1){
                    if(li == n-1){
                        break;
                    }
                    else{
                        num++;
                        cnt = 0;
                        li++;
                        continue;
                    }
                }
                cnt++;
                li++;
            }
        }
        if(ok){
            l = mid;
            continue;
        }
        if(num > m){
            l = mid;
        }
        else{
            r = mid;
        }
    }

    cout << r << endl;

 



    return 0;
}