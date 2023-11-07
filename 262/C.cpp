#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<pair<ll,ll>> pa(n);
    ll ans = 0;

    rep(i,n){
        cin >> a[i];
        a[i]--;
        pa[i].first = a[i];
        pa[i].second = i;
    }
    sort(pa.rbegin(),pa.rend());

    rep(i,n){
        if(pa[i].first == pa[i].second){
            ans++;
        }
    }
    

    cout << ans << endl;




    return 0;
}