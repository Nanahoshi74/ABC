#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;

    string n2 = to_string(n);
    ll keta = n2.size();

    ll ans = 0;
    repi(i,1,9999999){
        string p = to_string(i);
        p += p;
        ll q = stoll(p);
        if(q > n){
            break;
        }
        ans++;
        if(q >= n){
            break;
        }
    }


    cout << ans << endl;


    return 0;
}