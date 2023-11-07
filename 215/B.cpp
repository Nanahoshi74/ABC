#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;

    ll p = 1;
    ll k = 0;
    while(true){
        p *= 2;
        k += 1;
        if(p > n){
            break;
        }
    }

    cout << k-1 << endl;

    return 0;
}