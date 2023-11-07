#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll r,c;
    cin >> r >> c;

    vector<vector<ll>> a(2,vector<ll>(2));
    rep(i,2) cin >> a[0][i];
    rep(i,2) cin >> a[1][i];

    cout << a[r-1][c-1] << endl;


    return 0;
}