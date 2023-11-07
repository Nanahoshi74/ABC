#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m,t;
    cin >> n >> m >> t;
    vector<ll> a(n-1);
    rep(i,n-1) cin >> a[i];
    vector<ll> x(m),y(m);
    map<ll,ll> mp;
    rep(i,m) cin >> x[i] >> y[i];
    rep(i,m){
        mp[x[i]] += y[i];
    }

    vector<bool> ans(n+1,false);
    ans[1] = true;
    ll j = 1;
    rep(i,n-1){
        if(t -a[i] <= 0) break;
        t -= a[i];
        //cout << t << endl;
        j++;
        ans[j] = true;
        t += mp[j];
        //cout << t << endl;
    }
    if(ans[n]) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}