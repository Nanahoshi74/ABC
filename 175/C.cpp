#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll x,k,d;
    cin >> x >> k >> d;

    if(x < 0) x = -x;
    ll ans = 0;

    ll p = x/d;
    ll q = x % d;

    if(p >= k){
        cout << x - k * d << endl;
        return 0;
    }
    ans = abs(x - k * d);
    if((k-p) % 2 == 0){
        ans = min(ans,abs(q));
    }
    else{
        ans = min(ans,abs(x % d-d));
    }

    cout << abs(ans) << endl;

    return 0;
}