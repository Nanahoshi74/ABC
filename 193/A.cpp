#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b;
    cin >> a >> b;
    long double ans;

    printf("%.23f",(double)(a-b)/a*100);

    return 0;
}