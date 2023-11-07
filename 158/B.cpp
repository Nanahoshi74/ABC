#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,a,b;
    cin >> n >> a >> b;
    ll p = a + b;
    ll k = n/p;
    if(a == 0){
        cout << 0 << endl;
        return 0;
    }
    cout << a * k + n % p << endl;

    return 0;
}