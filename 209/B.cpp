#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,x;
    cin >> n >> x;
    vector<ll> a(n+1);
    repi(i,1,n){
        cin >> a[i];
    }
    ll ans = 0;
    repi(i,1,n){
        if(i % 2 == 0){
            ans += a[i]-1;
        }
        else{
            ans += a[i];
        }
    }
    if(ans > x){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }


    return 0;
}