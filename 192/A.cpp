#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll x;
    cin >> x;

    if(x % 100 == 0) cout << 100 << endl;
    else{
        ll p = x/100;
        cout << 100*(p+1)-x << endl;
    }

    return 0;
}