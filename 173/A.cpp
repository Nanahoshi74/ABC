#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;

    repi(i,1,10){
        if(i * 1000 == n){
            cout << 0 << endl;
            return 0;
        }
        else if(i * 1000 > n){
            cout << i * 1000 - n << endl;
            return 0;
        }
    }

    //cout <<   << endl;

    return 0;
}