#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,x,t;
    cin >> n >> x >> t;

    repi(i,1,1000000){
        if(x * i >= n){
            cout << i * t << endl;
            return 0;
        }
    }

    return 0;
}