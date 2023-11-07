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

int main(){

    ll x,y,z;
    cin >> x >> y >> z;

    ll ans = 0;
    if(0 < y && y < x){
        if(y < z){
            cout << -1 << endl;
            return 0;
        }
        if(z < 0){
            ans += 2*abs(z);
            ans += abs(x);
        }
        else{
            ans += abs(x);
        }
    }
    else if(0 > y && y > x){
        if(y > z){
            cout << -1 << endl;
            return 0;
        }
        if(z > 0){
            ans += 2 * abs(z);
            ans += abs(x);
        }
        else{
            ans += abs(x);
        }
    }
    else ans += abs(x);

    cout << ans << endl;


    return 0;
}