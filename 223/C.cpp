#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<double> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];

    int li = 0,ri = n-1;
    double lx = 0,rx = 0;
    double ans = 0;
    while(li < ri){
        double lt = (a[li]-lx)/b[li];
        double rt = (a[ri]-rx)/b[ri];
        if(lt < rt){
            ans += b[li]*lt;
            lx = 0; rx += b[ri]*lt;
            li++;
        }
        else{
            ans += b[li]*rt;
            rx = 0; lx += b[li]*rt;
            ri--;
        }
    }
    ans += (a[li]-lx-rx)/2;
    printf("%.10f\n",ans);


    return 0;
}