#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<double> x(n);
    rep(i,n) cin >> x[i];

    double a,b,c;
    c = abs(x[0]);
    rep(i,n){
        a += abs(x[i]);
        b += abs(x[i])*abs(x[i]);
        c = max(abs(x[i]),c);
    }
    b = sqrt(b);
    printf("%.15f\n",a);
    printf("%.15f\n",b);
    printf("%.15f\n",c);
    return 0;
}