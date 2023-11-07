#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,k;
    cin >> a >> b >> k;
    ll p = a;
    ll ans = 0;

    while(true){
        if(p >= b){
            break;
       }
       p *= k;
       ans++;
    }

    cout << ans << endl;

    return 0;
}