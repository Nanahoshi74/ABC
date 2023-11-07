#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,q;
    cin >> n >> q;
    map<ll,vector<ll>> mp;
    rep(i,n){
        ll a;
        cin >> a;
        mp[a].push_back(i);
    }

    rep(i,q){
        ll x,k;
        cin >> x >> k;
        vector<ll>& y = mp[x]; 
        if(y.size() < k){
            cout << -1 << endl;
        }
        else{
            cout << y[k-1] + 1 << endl;
        }
    }
    

    return 0;
}