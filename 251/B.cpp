#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,w;
    cin >> n >> w;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll ans = 0;
    ll b = 0;
    set<ll> st;

    rep(i,n){
        ll h = a[i];
        if(h <= w) st.insert(h);
        for(int j=i+1;j<n;j++){
            ll g = a[i] + a[j];
            if(g <= w) st.insert(g);
            for(int k=j+1;k<n;k++){
                ll x = a[i] + a[j] + a[k];
                if(x <= w) st.insert(x);
            }
        }
    }

    cout << st.size() << endl;
    

    return 0;
}