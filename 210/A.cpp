#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    
    ll n,a,x,y;
    cin >> n >> a >> x >> y;

    ll ans = 0;
    if(n <= a){
        ans += n * x;
    }
    else{
        ans += x * a;
        ans += y * (n-a);
    }
    

    cout << ans << endl;


    return 0;
}