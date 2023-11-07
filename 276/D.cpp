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

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

long long gcd_vec(vector<long long> const &A) { // N個の要素に対する最大公約数
    int size = (int)A.size();
    long long ret = A[0];
    for (int i = 1; i < size; i++) {
        ret = gcd(ret, A[i]);
    }
    return ret;
}

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    bool ok = true;
    rng(i,1,n){
        if(a[i] != a[i+1]){
            ok = false;
        }
    }
    ll ans = 0;
    ll k = gcd_vec(a);
    rep(i,n){
        a[i] /= k;
    }
    rep(i,n){
        vector<P> g = prime_factorize(a[i]);
        rep(j,si(g)){
            if(g[j].first == 2){
                ans += g[j].second;
                a[i] /= pow(2,g[j].second);
            }
            else if(g[j].first == 3){
                ans += g[j].second;
                a[i] /= pow(3,g[j].second);
            }
        }
    }
    rng(i,1,n){
        if(a[i] != a[i-1]){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;

    return 0;
}