#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m;
    cin >> n >> m;
    vector<pair<ll,bool>> c;
    ll ans = 10000000000;
    rep(i,n){
      ll x;
      cin >> x;  
      c.emplace_back(x,true);
    }
    rep(i,m){
        ll x;
        cin >> x;
        c.emplace_back(x,false);
    }
    sort(c.rbegin(),c.rend());
    ll size = c.size();
    rep(i,size-1){
        if((c[i].second == true && c[i+1].second == false) || (c[i].second == false && c[i+1].second == true)){
            ans = min(abs(c[i+1].first-c[i].first),ans);
        }
    }
    

    cout << ans << endl;
    

    return 0;
}