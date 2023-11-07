#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<double> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    ll ans = 0;
    rep(i,n){
        repi(j,i+1,n-1){
            if(((y[i]-y[j])/(x[i]-x[j])) >= -1.0 && ((y[i]-y[j])/(x[i]-x[j])) <= 1.0) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}