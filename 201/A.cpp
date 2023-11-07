#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<ll> a(3);
    rep(i,3) cin >> a[i];
    sort(a.begin(),a.end());
    if(2*a[1] == a[0] + a[2]) cout << "Yes" << endl;
    else cout << "No" << endl; 


    return 0;
}