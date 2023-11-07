#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    ll ans = 0;
    repi(i,1,n-1){
        if(a[i] < a[i-1]){
            ans += a[i-1]-a[i];
            a[i] = a[i-1];
        }
    }

    cout << ans << endl;

    return 0;
}