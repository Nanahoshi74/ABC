#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll ans = 0;
    vector<ll> p(n,0);
    rep(i,n){
        repi(j,0,i){
            p[j] += a[i];
            if(p[j] > 3){
                p[j] = -100000000;
                ans++;
            }
        }
    }

    cout << ans << endl;


    return 0;
}