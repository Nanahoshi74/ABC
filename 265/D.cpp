#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<ll> b(3);
    rep(i,3) cin >> b[i];
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    vector<ll> s(n+1);
    rep(i,n) s[i+1] = s[i] + a[i];
    unordered_set<ll> st;
    rep(i,n+1) st.insert(s[i]);

    rep(i,n+1){
        ll ns = s[i];
        rep(j,3){
            ns += b[j];
            if(!st.count(ns)) break;
            if(j == 2){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    


    return 0;
}