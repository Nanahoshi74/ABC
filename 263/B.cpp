#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> p(60);
    repi(i,2,n){
        cin >> p[i];
    }
    ll k,m;
    vector<ll> a(60);
    a[1] = 1;
    repi(i,2,n){
        a[i] = a[p[i]] + 1;
    }

    cout << a[n]-a[1] << endl;
  
    return 0;
}