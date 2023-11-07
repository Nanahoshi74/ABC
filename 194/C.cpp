#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

ll nCk(ll a,ll b){
    ll p = 1;
    for(int i = 1; i <= b; i++){
        p *= a-i+1;
        p /= i;
    }
    return p;
}

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll,ll> mp;
    set<pair<ll,ll>> st;
    rep(i,n){
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    repi(i,-200,200){
        ll k = i * i * mp[i];
        ans += (n-1) * k;
        repi(j,-200,200){
            if(!st.count(pair(i,j))){
            ll p = 0;
            if(i == j) p = (-2 * i * j) * nCk(mp[i],2);
            else{
                p = -2 * i * j * mp[i] * mp[j];
                //if(mp[i] != 0 && p != 0) cout << p << endl;
            }
            st.insert(pair(i,j));
            st.insert(pair(j,i));
            //if(p != 0) cout << p << endl;
            ans += p;
        }
      }
    }
    cout << ans << endl;


    return 0;
}