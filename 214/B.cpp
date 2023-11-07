#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll s,t;
    cin >> s >> t;

    ll ans = 0;
    rep(i,101){
        rep(j,101){
            rep(k,101){
                if(i + j + k <= s && i*j*k <= t){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}