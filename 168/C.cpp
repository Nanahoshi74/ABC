#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,h,m;
    cin >> a >> b >> h >> m;//分針の長さがb

    double PI = acos(-1);

    double x1,x2,y1,y2;//x1y1が分針
    x1 = b * cos((double)(6 * m) * PI/180);
    y1 = b * sin((double)(6 * m) * PI/180);
    double theta = 30 * h + 0.5 * m;
    x2 = a * cos((double)theta * PI/180);
    y2 = a * sin((double)theta * PI/180);

    cout << setprecision(20) << sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) << endl;


    return 0;
}