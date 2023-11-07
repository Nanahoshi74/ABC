#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,x;
    cin >> n >> x;

    string s;
    
    rep(i,26){
        rep(j,n){
            s += 'A' + i;
        }
    }

    cout << s[x-1] << endl;

    return 0;
}