#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll k,n;
    cin >> n >> k;

    ll ans = 0;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    rep(i,10000000){
        if(pow(k,i) > n){
            cout << i << endl;
            return 0;
        }
        if(pow(k,i) == n){
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}