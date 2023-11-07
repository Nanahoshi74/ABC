#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> t(n); 
    vector<double> l(n),r(n);
    ll ans = 0;
    rep(i,n){
        cin >> t[i] >> l[i] >> r[i];
        if(t[i] == 2){
            r[i] -= 0.5;
        }
        if(t[i] == 3){
            l[i] += 0.5;
        }
        else if(t[i] == 4){
            l[i] += 0.5;
            r[i] -= 0.5;
        }
    }
    rep(i,n){
        repi(j,i+1,n-1){
            if(max(l[i],l[j]) <= min(r[i],r[j])) ans++;
        }
    }

    cout << ans << endl;



    return 0;
}