#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll k;
    string n;
    cin >> n >> k;
    rep(i,k){
        if(stoll(n) % 200 == 0){
            ll nl = stoll(n);
            nl /= 200;
            n = to_string(nl);
        }
        else{
            n += "200";
        }
    }

    cout << n << endl;


    return 0;
}