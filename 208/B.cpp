#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;


int main(){

    ll p;
    cin >> p;

    ll ans = 0;
    vector<ll> fac(20);
    fac[0] = 1;
    repi(i,1,10){
        fac[i] = fac[i-1] * i;
    }

    for(int i = 10; i >= 1; i--){
        while(p >= fac[i]){
            ans++;
            p -= fac[i];
        }
    }

    cout << ans << endl;
   


    return 0;
}