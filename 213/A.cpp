#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b;
    cin >> a >> b;
    rep(i,256){
        if((a^i) == b){
            cout << i << endl;
            return 0;
        }
    }


    return 0;
}