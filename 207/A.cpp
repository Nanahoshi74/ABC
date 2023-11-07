#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<ll> a(3);
    rep(i,3) cin >> a[i];
    sort(a.rbegin(),a.rend());

    cout << a[0] + a[1] << endl;

    return 0;
}