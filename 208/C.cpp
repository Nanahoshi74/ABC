#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    vector<ll> p(n,k/n);
    k %= n;

    vector<pair<ll,ll>> pa(n);
    rep(i,n){
        pa[i].first = a[i];
        pa[i].second = i;
    }
    sort(pa.begin(),pa.end());
    for(auto &m : pa){
        if(k == 0) break;
        ll h = m.second;
        if(k > 0){
            p[h]++;
            k--;
        }
        if(k == 0) break;
    }

    rep(i,n){
        cout << p[i] << endl;
    }


    

    return 0;
}