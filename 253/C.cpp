#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll q;
    cin >> q;
    map<ll,ll> mp;
    set<ll> st;

    rep(i,q){
        ll a;
        cin >> a;
        if(a == 1){
            ll x;
            cin >> x;
            st.insert(x);
            mp[x]++;
        }
        else if(a == 2){
            ll x,c;
            cin >> x >> c;
            ll p = min(c,mp[x]);
            mp[x] -= p;
            if(mp[x] == 0){
                st.erase(x);
            }
        }
        else{
            cout <<*rbegin(st) -*begin(st) << endl;
        }
    }


    return 0;
}