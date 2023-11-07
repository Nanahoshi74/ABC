#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll x;
    cin >> x;

    ll ans = 0;
    ans += x/500 * 1000;
    x -= 500 * (x/500);

    ans += x/5 * 5;
    
    cout << ans << endl;



    return 0;
}