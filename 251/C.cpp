#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> t;
    set<string> st;
    vector<pair<ll,ll>> p;

    rep(i,n){
        string s;
        cin >> s;
        ll x;
        cin >> x;
        if(st.count(s)){
            continue;
        }
        else{
            st.insert(s);
            p.emplace_back(x,-(i+1));
        }
    }

    sort(p.rbegin(),p.rend());

    
    cout << -p[0].second << endl;   


    return 0;
}