#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll h,w,x,y;
    cin >> h >> w >> y >> x;
    x--;
    y--;

    vector<string> s(h);
    rep(i,h) cin >> s[i];

    ll ans = 0;
    for(int i = y; i >= 0; i--){
        if(s[i][x] == '#') break;
        else if(s[i][x] == '.'){
            ans++;         
        }
    }
    repi(i,y+1,h-1){
        if(s[i][x] == '#') break;
        else if(s[i][x] == '.'){
            ans++;         
        }
    }
    for(int i = x-1; i >= 0; i--){
        if(s[y][i] == '#') break;
        else if(s[y][i] == '.'){
            ans++;         
        }
    }
    repi(i,x+1,w-1){
        if(s[y][i] == '#') break;
        else if(s[y][i] == '.'){
            ans++;         
        }
    }
    
    cout << ans << endl;


    return 0;
}