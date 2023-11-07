#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

     int ans;

    int x,y;
    cin >> x >> y;
    if(x >= y){
        ans = 0;
    }
    else{
        if((y-x)%10 == 0){
            ans = (y-x)/10;
        }
        else{
        ans = (y-x)/10+1;
        }
    }

    cout << ans << endl;


    return 0;
}