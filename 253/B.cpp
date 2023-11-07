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

    int x1,x2,y1,y2;
    bool ok = false;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == 'o' && !ok){
                y1 = i;
                x1 = j;
                ok = true;
            }
            if(ok){
                if(s[i][j] == 'o'){
                    y2 = i;
                    x2 = j;
                }
            }
        }
    }

    cout << (abs(x1-x2) + abs(y1-y2)) << endl;


    return 0;
}