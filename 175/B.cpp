#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> l(n);
    rep(i,n){
        cin >> l[i];
    }
    ll ans = 0;
    rep(i,n){
        repi(j,i+1,n-1){
            repi(k,j+1,n-1){
                if(l[i] == l[j] || l[i] == l[k] || l[j] == l[k]) continue;
                vector<ll> p(3);
                p[0] = l[i];
                p[1] = l[j];
                p[2] = l[k];
                sort(p.rbegin(),p.rend());
                if(p[0] < p[1] + p[2]) ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}