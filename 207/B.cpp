#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll p = a;
    ll q = 0;
    ll ans = 0;

    ll i = 0;

    if(b >= c && b > c*d){
        cout << -1 << endl;
        return 0;
    }

    else{
        while(true){
            if(p <= q*d){
                cout << ans << endl;
                return 0;
            }
            p += b;
            q += c;
            ans++;
            if(p <= q*d){
                cout << ans << endl;
                return 0;
            }
            if(i > pow(10,7)){
                cout << -1 << endl;
                return 0;
            }
            i++;
        }
    }

    return 0;
}