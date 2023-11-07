#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b;
    cin >> a >> b;

    ll c = a + b;

    if(c >= 15 && b >= 8) cout << 1 << endl;
    else if(c >= 10 && b >= 3) cout << 2 << endl;
    else if(c >= 3) cout << 3 << endl;
    else cout << 4 << endl;


    return 0;
}