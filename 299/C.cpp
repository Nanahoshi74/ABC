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

int main(){

    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool ok1 = false,ok2 = false;
    rep(i,n){
        if(s[i] == '-'){
            ok1 = true;
        }
        if(s[i] == 'o'){
            ok2 = true;
        }
    }
    if(!ok1 || !ok2){
        cout << -1 << endl;
        return 0;
    }
    vector<ll> a(n,0);
    if(s[0] == 'o'){
        a[0]++;
    }

    rng(i,1,n){
        if(s[i] == 'o'){
            a[i] = a[i-1] + 1;
        }
        else{
            a[i] = 0;
        }
    }
    ll li = 0;
    ll ma = -1;
    rep(i,n){
        if(ma < a[i]){
            ma = a[i];
            li = i;
        }
    }
   
    cout << a[li] << endl;
    
    return 0;
}