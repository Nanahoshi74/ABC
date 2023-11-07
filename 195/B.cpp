#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,w;
    cin >> a >> b >> w;

    w *= 1000;
    const int INF = 1001001001;
    int l = INF,r = -INF;
    repi(n,1,w){
        if(a*n <= w && w <= b*n){
            l = min(l,n);
            r = max(r,n);
        }
    }
    if(l == INF) cout << "UNSATISFIABLE" << endl;
    else cout << l << " " << r << endl;


    return 0;
}