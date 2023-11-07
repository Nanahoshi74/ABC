#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
#define si(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
using namespace std;

int main(){

    vector<ll> a(5);
    rep(i,5) cin >> a[i];
    map<ll,bool> mp;
    rep(i,5) mp[a[i]] = true;
    ll ans = 0;
    rep(i,si(mp)){
        if(mp[i]){
            ans++;
        }
    }

    cout << ans << endl;
    

    return 0;
}