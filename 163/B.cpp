#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(m);
    ll sum = 0;
    rep(i,m){
        cin >> a[i];
        sum += a[i];
    }
    ll ans = n-sum;
    if(ans < 0){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }



    return 0;
}