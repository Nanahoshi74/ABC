#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> x(n);
    rep(i,n) cin >> x[i];
    vector<pair<ll,ll>> a(m);
    ll ans = 0;
    rep(i,n){
        cin >> a[i].first >> a[i].second;
        a[i].second = -a[i].second;
    }
    sort(a.begin(),a.end());
    rep(i,m){
        a[i].second = -a[i].second;
    }

    ll co = 0;

    rep(i,n){
        ans += x[i];
        if(a[i].first > co){
            continue;
        }
        else{

        }
    }

    return 0;
}