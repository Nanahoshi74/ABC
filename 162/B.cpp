#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(n+1);
    ll ans = 0;
    repi(i,1,n){
        if(i % 3 == 0 && i % 5 == 0){
            a[i] = -1;
        }
        else if(i % 3 == 0){
            a[i] = -1;
        }
        else if(i % 5 == 0){
            a[i] = -1;
        }
        else{
            a[i] = i;
        }
    }
    repi(i,1,n){
        if(a[i] == -1){
            continue;
        }
        else{
            ans += a[i];
        }
    }

    cout << ans << endl;

    return 0;
}