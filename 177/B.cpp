#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s,t;
    cin >> s >> t;

    ll ans = 100000000;

    rep(i,s.size()-t.size()+1){
        ll nans = 0;
        rep(j,t.size()){
            if(s[j+i] != t[j]) nans++;
        }
        ans = min(ans,nans);
    }

    cout << ans << endl;

    return 0;
}