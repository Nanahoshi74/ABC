#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;

    ll k = gcd(sy,gy);
    ll p = sy/k;
    ll q = gy/k;

    double ans = (double)(q*sx + p*gx)/(p+q);

    printf("%.15f\n",ans);


    return 0;
}