#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    int ans = 100000001;
    rep(x,10){
        char c = '0' + x;
        vector<int> num(10);
        rep(i,n){
            rep(j,10) if(s[i][j] == c) num[j]++;
        }
        int now = 0;
        rep(i,10){
            int t = i+10*(num[i]-1);
            now = max(now,t);
        }
        ans = min(ans,now);
    }

    cout << ans << endl;
    return 0;
}