#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll,ll> mp;
    ll sum = 0;
    rep(i,n){
        cin >> a[i];
        mp[a[i]]++;
        sum += a[i];
    }
    ll q;
    cin >> q;
    rep(i,q){
        ll ans = sum;
        ll b,c;
        cin >> b >> c;
        sum -= b * mp[b];
        ll k = mp[b];
        mp[b] = 0;
        sum += c * k;
        mp[c] += k;
        cout << sum << endl;
    }

    return 0;
}