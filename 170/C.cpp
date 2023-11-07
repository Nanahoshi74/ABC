#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll x,n;
    cin >> x >> n;
    vector<ll> p(n);
    unordered_set<ll> st;
    rep(i,n){
        cin >> p[i];
        st.insert(p[i]);
    }
    if(n == 0){
        cout << x << endl;
        return 0;
    }
    ll ans = 100000000000;
    sort(p.begin(),p.end());
    ll c;
    c = lower_bound(p.begin(),p.end(),x) - p.begin();
    vector<ll> q; 
    if(c == n){
        ans = x;
        q.push_back(ans);
    }
    else{
        for(int i = p[c]; i <= p[n-1]+3; i++){
            if(!st.count(i)){
                if(abs(i-x) <= abs(ans-x)){
                    ans = i;
                }
            }
        }
        q.push_back(ans);
        for(int i = p[c]; i >= p[0]-3; i--){
            if(!st.count(i)){
                if(abs(i-x) <= abs(ans-x)){
                    ans = i;
                }
            }
        }
        q.push_back(ans);
    }

    cout << *min_element(q.begin(),q.end()) << endl;


    return 0;
}