#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,x,y,z;
    cin >> n >> x >> y >> z;

    vector<pair<ll,ll>> a(n),b(n),c(n);
    rep(i,n){
        cin >> a[i].first;
        a[i].second = -i;
    } 
    rep(i,n){
        cin >> b[i].first;
        b[i].second = -i;
    }
    rep(i,n){
        c[i].first = a[i].first + b[i].first;
        c[i].second = -i;
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());

    rep(i,n){
        a[i].second = -a[i].second;
        b[i].second = -b[i].second;
        c[i].second = -c[i].second;
    }
    set<ll> st;
    rep(i,x){
        st.insert(a[i].second);
    }
    ll p = 0;
    rep(i,n){
        if(p == y) break;
        if(!st.count(b[i].second)){
            st.insert(b[i].second);
            p++;
        }
        if(p == y) break;
    }
    ll q = 0;
    rep(i,n){
        if(q == z) break;
        if(!st.count(c[i].second)){
            st.insert(c[i].second);
            q++;
        }
        if(q == z) break;
    }
    for(auto k : st){
        cout << k+1 << endl;
    }



    return 0;
}