#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<ll> a(3);
    rep(i,3) cin >> a[i];

    swap(a[0],a[1]);
    swap(a[0],a[2]);

    rep(i,3){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}