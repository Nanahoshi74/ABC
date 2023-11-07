#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    ll ans = 0;
    if(n % 2 == 0){
        ans = n/2;
    }
    else{
        ans = n/2 + 1;
    }

    cout << ans << endl;

    return 0;
}