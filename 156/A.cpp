#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,r;
    cin >> n >> r;
    ll ans;
    if(n >= 10){
        ans = r;
    }
    else{
        ans = r + 100*(10-n);
    }

    cout << ans << endl;

    return 0;
}