#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    ll ans = 0;
    repi(i,1,n){
        char li = i + '0';
        repi(j,1,k){
            char lj = j + '0';
            string s;
            s += li;
            s += '0';
            s += lj;
           ans += stoll(s);
        }
    }

    cout << ans << endl;

    return 0;
}