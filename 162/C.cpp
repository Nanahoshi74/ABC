#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll k;
    cin >> k;

    ll ans = 0;

    repi(i,1,k){
        repi(j,1,k){
            repi(v,1,k){
                ll h,u;
                h = gcd(i,j);
                u = gcd(j,v);
                ans += gcd(h,u);
            }
        }
    }

    cout << ans << endl;

    return 0;
}