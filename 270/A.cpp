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

    ll a,b;
    cin >> a >> b;

    vector<bool> c(3,false),d(3,false);
    if(a == 1) c[0] = true;
    if(a == 2) c[1] = true;
    if(a == 4) c[2] = true;
    if(a == 3){
        c[0] = true;
        c[1] = true;
    }
    if(a == 5){
        c[0] = true;
        c[2] = true;
    }
    if(a == 6){
        c[1] = true;
        c[2] = true;
    }
    if(a == 7){
        rep(i,3) c[i] = true;
    }

    if(b == 1) d[0] = true;
    if(b == 2) d[1] = true;
    if(b == 4) d[2] = true;
    if(b == 3){
        d[0] = true;
        d[1] = true;
    }
    if(b == 5){
        d[0] = true;
        d[2] = true;
    }
    if(b == 6){
        d[1] = true;
        d[2] = true;
    }
    if(b == 7){
        rep(i,3) d[i] = true;
    }
    ll ans = 0;
    rep(i,3){
        if(c[i] || d[i]){
            if(i == 0){
                ans += 1;
            }
            else if(i == 1){
                ans += 2;
            }
            else{
                ans += 4;
            }
        }
    }

    cout << ans << endl;


    return 0;
}