#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<ll> p(26);
    rep(i,26) cin >> p[i];
    vector<char> ans(26);
    
    rep(i,26){
        ans[i] = 'a' + p[i]-1;
    }
    rep(i,26){
        cout << ans[i];
    }

    cout << endl;

    return 0;
}