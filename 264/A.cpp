#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll l,r;
    cin >> l >> r;
    string s = "atcoder";
    string ans;
    ans = s.substr(l-1,r-l+1);
    cout << ans << endl;

    return 0;
}