#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int keta(ll n){
    ll ans = 0;
    ll p = 1;
    while(true){
        if(p > n){
            return ans-1;
        }
        ans++;
        p *= 10;
    }
}

ll my_pow(ll k,ll n){
    ll p = 1;
    rep(i,n){
        p *= k;
    }
    return p;
}

int main(){

    ll n;
    cin >> n;

    ll ans = 0;

    ll p = keta(n);
    if(n < 1000){
        cout << 0 << endl;
        return 0;
    }
    else{
        ll k = 3,t = 1;
        rep(i,5){
            if(p < k+3){
                ans += (n-my_pow(10,k)+1)*t;
                cout << ans << endl;
                return 0;
            }
            else{
                ans += (my_pow(10,k+3)-my_pow(10,k))*t;
            }
            k += 3;
            t++;
        }
    }
    cout << ans << endl;

    return 0;
}