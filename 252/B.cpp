#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    vector<ll> a(n),b(k);
    rep(i,n) cin >> a[i];
    rep(i,k) cin >> b[i];

    ll x = *max_element(a.begin(),a.end());
    rep(i,n){
        if(a[i] == x){
            rep(j,k){
                if(i == b[j]-1){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}