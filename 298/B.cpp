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

bool ok(vector<vector<ll>> a,vector<vector<ll>>b,ll n){
    bool p = true;
    rep(i,n){
        rep(j,n){
            if(a[i][j] == 1){
                if(b[i][j] != 1){
                    p = false;
                }
            }
        }
    }
    if(p){
        return true;
    }
    else return false;
}

int main(){

    ll n;
    cin >> n;
    vector<vector<ll>> a(n,vector<ll>(n)),b(n,vector<ll>(n));
    rep(i,n){
        rep(j,n){
            cin >> a[i][j];
        }
    }
    rep(i,n){
        rep(j,n){
            cin >> b[i][j];
        }
    }
    ll cnt = 0;
    if(ok(a,b,n)){
        cout << "Yes" << endl;
        return 0;
    }
    while(true){
        cnt++;
        vector<vector<ll>> u(n,vector<ll>(n));
        rng(i,1,n+1){
            rng(j,1,n+1){
                u[i-1][j-1] = a[n-j][i-1];
            }
        }
        a = u;
        if(ok(a,b,n)){
            cout << "Yes" << endl;
            return 0;
        }
        if(cnt >= 4){
            cout << "No" << endl;
            return 0;
        }
    }


    return 0;
}