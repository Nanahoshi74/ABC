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


int main(){

    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll a = 0,b = 0;
    rep(i,n){
        if(s[i] == 'R') a++;
    }
    ll ans = max(a,b);
    rep(i,n){
        if(s[i] == 'R') a--;
        else b++;
        ll now = 0;
        ll p = a,q = b;
        now += min(a,b);
        p -= min(a,b);
        q -= min(a,b);
        now += max(p,q);
        //上の4行は不要でnow = max(a,b);で十分 
        ans = min(ans,now);
    }

    cout << ans << endl;

    return 0;
}