#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> w(n);
    rep(i,n) cin >> w[i];
    map<ll,vector<ll>> mp;
    rep(i,n) mp[w[i]].push_back(i);
    ll now = 0;
    rep(i,n) if(s[i] == '1') now++;
    ll ans = now;
    for(auto p : mp){
        for(int i : p.second){
            if(s[i] == '1') now--;
            else now++;
        }
        ans = max(ans,now);
    }

    cout << ans << endl;
    

    return 0;
}