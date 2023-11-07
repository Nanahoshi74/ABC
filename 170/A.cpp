#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<ll> a(5);
    rep(i,5){
        cin >> a[i];
        if(a[i] == 0){
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}