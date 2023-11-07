#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    rep(i,n) cin >> a[i];
    b = a;
    sort(b.begin(),b.end());
    rep(i,n){
        if(a[i] == b[n-2]){
            cout << i + 1 << endl;
        }
    }

    return 0;
}