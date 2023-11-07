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
    vector<ll> p(1001);
    rep(i,n){
        repi(j,1,1000){
            if(a[i] % j == 0){
                p[j]++;
            }
        }
    }
    ll ans = -10000;
    ll k = -10000;
    repi(i,1,1000){
        if(p[i] > k && i > 1){
            ans = i;
            k = p[i];
        }
    }

    cout << ans << endl;



    return 0;
}