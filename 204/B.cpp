#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    rep(i,n){
        cin >> a[i];
        if(a[i] > 10){
            ans += a[i] - 10;
        }
    }

    cout << ans << endl;


    return 0;
}