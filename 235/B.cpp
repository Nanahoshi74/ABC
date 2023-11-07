#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];

    ll ans = h[0];

    rep(i,n-1){
        if(ans < h[i+1]){
            ans = h[i+1];
        }
        else if(i != 0 && ans == h[i+1]){
            break;
        }
        else if(h[i] > h[i+1]){
            break;
        }
    }

    cout << ans << endl;

    return 0;
}