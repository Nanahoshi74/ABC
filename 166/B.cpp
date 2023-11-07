#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    vector<bool> ans(n,false);
    rep(i,k){
        ll m;
        cin >> m;
        vector<ll> a(m);
        rep(i,m){
            cin >> a[i];
            a[i]--;
            ans[a[i]] = true;
        }
    }
    ll p = 0;
    rep(i,ans.size()){
        if(!ans[i]) p++;
    }

    cout << p << endl;



    return 0;
}