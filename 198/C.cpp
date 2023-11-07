#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll r,x,y;
    cin >> r >> x >> y;

    ll d2 = x*x + y*y;
    ll ans = 1;
    while(true){
        if(r*r*ans*ans >= d2) break;
        ans++;
    }
    if(ans == 1){
        if(r*r != d2) ans = 2;
    }
    cout << ans << endl;

    return 0;
}