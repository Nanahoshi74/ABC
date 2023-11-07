#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    set<ll> st;
    rep(i,n){
        ll a;
        cin >> a;
        st.insert(a);
    }
    rep(i,n){
        if(!st.count(i+1)){
            cout << "No"<< endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}