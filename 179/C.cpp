#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    
    ll ans = 0;
    repi(a,1,n){
        ans += (n-1)/a;
    }
    cout << ans << endl;

    return 0;
}