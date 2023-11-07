#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    ll li,lj;
    li = 0; lj = 0;
    ll p = 0;

    while(true){
            if(s[li][lj] == 'U' && li != 0){
                li = li-1;
            }
            else if(s[li][lj] == 'D' && li != h-1){
                li = li + 1;
            }
            else if(s[li][lj] == 'L' && lj != 0){
                lj = lj-1;
            }
            else if(s[li][lj] == 'R' && lj != w-1){
                lj = lj + 1;
            }
            else break;
            p++;
            if(p > 1e7){
                cout << -1 << endl;
                return 0;
            }

    }
    

    cout << li+1 << " " << lj+1 << endl;

    return 0;
}