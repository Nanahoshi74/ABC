#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll x,y;
    cin >> x >> y;
    if(x == y){
        cout << x << endl;
    }
    else{
        rep(i,3){
            if(i != x && i != y){
                cout << i << endl;
            }
        }
    }

    return 0;
}