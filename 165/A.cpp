#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,k;
    cin >> k;
    cin >> a >> b;
    repi(i,a,b){
        if(i % k == 0){
            cout << "OK" << endl;
            return 0;
        }
    }

    cout << "NG" << endl;

    return 0;
}