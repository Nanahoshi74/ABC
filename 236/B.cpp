#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> a(4*n-1);
    rep(i,4*n-1) cin >> a[i];
    vector<ll> b(n+1,0);

    rep(i,4*n-1){
        b.at(a.at(i))++;
    }

    for(int i=1;i<=n;i++){
        if(b[i] != 4){
            cout << i << endl;
            return 0;
        }
    }
   


    return 0;
}