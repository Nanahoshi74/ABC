#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    ll ans = 0;

    if(n < k){
        if(abs(n-k) < n){
            ans = abs(n-k);
        }
        else{
            ans = n;
        }
    }
    else{
        if(n % k == 0){
            ans = n % k;
        }
        else{
            ans = abs(n % k - k);
        }
    }

    cout << ans << endl;

    return 0;
}