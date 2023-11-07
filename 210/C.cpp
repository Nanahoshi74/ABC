#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    vector<ll> c(n);
    rep(i,n) cin >> c[i];
    map<ll,ll> mp;
    set<ll> st;
    rep(i,k){
        mp[c[i]]++;
        st.insert(c[i]);
    }
    ll ans = st.size();
    repi(i,k,n-1){
        mp[c[i]]++;
        st.insert(c[i]);
        mp[c[i-k]]--;
        if(mp[c[i-k]] == 0){
            st.erase(c[i-k]);
        }
        ll size = st.size();
        ans = max(ans,size);
    }

    cout << ans << endl;



    return 0;
}