#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c;
    cin >> a >> b >> c;

    a = abs(a-7);
    b = abs(b-7);
    c = abs(c-7);

    cout << a + b + c << endl;

    return 0;
}