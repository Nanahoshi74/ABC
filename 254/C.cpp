#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    rep(r,k){
        vector<ll> b;
        for(int i= r; i < n; i += k){
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        for(int i = r; i < n; i+=k){
            a[i] = b[i/k];
        }
    }

    vector<ll> tmp = a;
    sort(tmp.begin(),tmp.end());
    if(a == tmp) cout << "Yes" << endl;
    else cout << "No" << endl;
   
    return 0;
}