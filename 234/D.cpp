#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    vector<ll> p(n,0),a(n,0);
    rep(i,n) cin >> p[i];
    a = p;

    sort(a.begin(),a.end());
    ll ans = a[0];

    ll st = k;

    rep(i,n-k+1){
        if(i != 0){
        if(ans < p[st-1]){
            ans = a[st-1];
        }
        else{
        }
        st++;
    }
    cout << ans << endl;
  }
    

    return 0;
}