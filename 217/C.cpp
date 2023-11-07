#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> p(n),q(n);
    rep(i,n) cin >> p[i];

    rep(i,n){
        q[p[i]-1] = i+1;
    }
    rep(i,n){
        cout << q[i] << " ";
    }
    cout << endl;
    

    return 0;
}