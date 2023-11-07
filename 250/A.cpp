#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll h,w,r,c;
    cin >> h >> w;
    cin >> r >> c;
    ll ans = 0;

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(abs(i-r)+abs(j-c) == 1) ans++;
        }
    }

    cout << ans << endl;


    return 0;
}