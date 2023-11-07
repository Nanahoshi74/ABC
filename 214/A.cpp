#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    ll ans = 0;
    if(n >= 1 && n <= 125){
        ans = 4;
    }
    else if(n >= 126 && n <= 211){
        ans = 6;
    }
    else{
        ans = 8;
    }

    cout << ans << endl;

    return 0;
}