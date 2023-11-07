#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    while(true){
        if(n % 998244353 >= 0 && n % 998244353 < 998244353){
            cout << n % 998244353 << endl;
            return 0;
        }
        else{
            n += 998244353;
        }
    }

    return 0;
}