#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<ll> a(4);
    rep(i,4) cin >> a[i];

    cout << *min_element(a.begin(),a.end()) << endl; 
    return 0;
}