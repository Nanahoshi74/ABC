#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    double ans = 0;
    vector<ll> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    rep(i,n){
        for(int j=i+1;j<n;j++){
            double len = sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
            if(len > ans){
                ans = len;
            }
        }
    }

    printf("%.10f",ans);

    return 0;
}