#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    double l;
    cin >> l;
    double p = l/3;
    double ans;
    ans = p * p * p;

    cout << fixed <<setprecision(10) << ans << endl;

    return 0;
}