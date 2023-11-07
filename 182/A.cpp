#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b;
    cin >> a >> b;

    ll p = 2*a + 100;
    
    cout << p - b << endl;

    return 0;
}