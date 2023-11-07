#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    map<ll,ll> mp;
    set<ll> st;
    vector<ll> p;
    p.push_back(0);
    ll ans = 0;
    rep(i,n){
        ll a,b;
        cin >> a >> b;
        mp[a] += b;
        if(!st.count(a)){
            p.push_back(a);
        }
        st.insert(a);
    }
    mp[0] += k;
    sort(p.begin(),p.end());
    rep(i,p.size()-1){
        if(k >= p[i+1]-p[i]){
            k -= p[i+1] -p[i];
            k += mp[p[i+1]];
            ans = p[i+1];
        }
        else{
            ans += k;
            k = 0;
        }
    }
    ans += k;

    

    
    cout << ans << endl;


    return 0;
}