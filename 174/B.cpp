#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,d;
    cin >> n >> d;
    ll ans = 0;
    rep(i,n){
        ll a,b;
        cin >> a >> b;
        if(a*a + b*b <= d*d) ans++;
    }

    cout << ans << endl;

    return 0;
}