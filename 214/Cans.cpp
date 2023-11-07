#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i=a; i <= (int)(b); i++)
#define repr(i,a,b) for(int i=a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> s(n),t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    rep(i,2*n){
        t[((i+1)%n)] = min(t[(i+1)%n],t[i%n]+s[i%n]);
    }
    rep(i,n) cout << t[i] << endl;
    return 0;
}