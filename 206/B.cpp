#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    ll ans = 0;

    ll i = 1;
    while(true){
        ans += i;
        if(ans >= n){
            cout << i << endl;
            return 0;
        }
        i++;
    }

    return 0;
}