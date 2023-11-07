#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll x,a,d,n;
    cin >> x >> a >> d >> n;
    ll ans = 0;
    ll low = 0;
    rep(i,n){
        if(a + i*d >= x){
            low = i;
        }
    }
    if(a + n*d < x){
        low = n;
    }

    vector<ll> k;
    if(low == n){
        cout << abs(x- a + (low-1)*d) << endl;
        return 0;
    }
    else{
        k.push_back(abs(x - a + low*d));
        if(low != 0) k.push_back(abs(x - a + (low-1)*d));
        else if(low != n-1) k.push_back(abs(x - a + (low+1)*d ));
    }

    cout << *min_element(k.begin(),k.end());
 


    return 0;
}