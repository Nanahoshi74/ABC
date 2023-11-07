#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> a(m+1);
    ll j = 0;
    repi(i,1,m){
        a[j] = i;
        j++;
    }
    vector<vector<ll>> s;
    set<vector<ll>> st;
    for(int bit  = 0; bit < (1 << m); bit++){
        vector<ll> p;
        for(int i = 0; i < m; i++){
            if(bit & (1 << i)){
                p.push_back(a[i]);
            }
        }
        sort(p.begin(),p.end());
        if(p.size() == n && !st.count(p)){
            s.push_back(p);
            st.insert(p);
        }
    }
    
    sort(s.begin(),s.end());
    rep(i,s.size()){
        rep(j,s[i].size()){
            cout << s[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}