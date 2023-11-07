#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;
const double PI=3.14159265358979323846;

int main(){

    ll a,b,d;
    cin >> a >> b >> d;

    double rad = d*(PI/180);

    double x,y;
    x = a*cos(rad)-b*sin(rad);
    y = a*sin(rad)+b*cos(rad);

    printf("%.15f",x);
    cout << " ";
    printf("%.15f",y);
    cout << endl;

    return 0;
}