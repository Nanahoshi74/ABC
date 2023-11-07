#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

ll nCk(ll a,ll b){
    ll p = 1;
    for(int i = 1; i <= b; i++){
        p *= a-i+1;
        p /= i;
    }
    return p;
}

int main(){

    ll n,m;
    cin >> n >> m;

    ll ans = 0;
    if(n >= 2){
        ans += nCk(n,2);
    }
    if(m >= 2){
        ans += nCk(m,2);
    }

    cout << ans << endl;

    return 0;
}