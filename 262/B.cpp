#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m;
    cin >> n >> m;
    vector<ll> u(m),v(m);
    ll ans = 0;

    vector<vector<bool>> a(n,vector<bool>(n,false));
    rep(i,m){
        cin >> u[i] >> v[i];
        u[i]--; v[i]--;
        a[u[i]][v[i]] = true;
        a[v[i]][u[i]] = true;
    }
    repi(i,0,n-1){
        repi(j,i+1,n-1){
            repi(k,j+1,n-1){
                if(a[i][j] && a[j][k] && a[i][k]){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}