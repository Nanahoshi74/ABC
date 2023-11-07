#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define rrng(i,a,b) for(int i = a; i > (int)(b); i--)
#define pb push_back
#define em emplace_back
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;
using P = pair<ll,ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
ll mul(ll a, ll b) { if (a == 0) return 0; if (LINF / a < b) return LINF; return min(LINF, a * b); }

void print(vector<ll> &a){
    rep(i,si(a)){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(m);
     if(m == 0){
        cout << 1 << endl;
        return 0;
    }
    rep(i,m){
        cin >> a[i];
        a[i]--;
    }
    sort(all(a));
    vector<ll> p(m+1);
    ll ans = 0;
    p[0] = a[0]; 
    rng(i,1,m+1){
        p[i] = a[i]-a[i-1]-1;
    }
    p[m] = n-a[m-1]-1;
    ll k = LINF;
    rep(i,m+1){
        if(p[i] > 0){
            k = min(k,p[i]);
        }
    }
    rep(i,m+1){
        if(p[i] % k == 0){
            ans += p[i]/k;
        }
        else{
            ans += p[i]/k + 1;
        }
    }

    //print(p);
    

    cout << ans << endl;


    return 0;
}