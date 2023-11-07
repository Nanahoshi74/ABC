#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i=a; i <= (int)(b); i++)
#define repr(i,a,b) for(int i=a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll> s(n),t(n);
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    vector<ll> ans(n);
    ll x = *min_element(t.begin(),t.end());
    ll p;
    rep(i,n){
        if(t[i] == x){
            p = i;
            break;
        }
    }
    ans[p] = t[p];
    repr(i,p,n-1){
        if(t[i+1] < ans[i] + s[i]){
            ans[i+1] = t[i+1];
        }
        else{
            ans[i+1] = ans[i] + s[i];
        }
    }
    if(p == 1){
           if(ans[n-1] + s[n-1] < t[0]){
               ans[i] = ans[n-1] + s[n-1];
           }
           else{
               ans[i] = t[0];
           }
        }
    repr(i,0,p-1){
            if(t[i+1] < ans[i] + s[i]){
            ans[i+1] = t[i+1];
        }
        else{
            ans[i+1] = ans[i] + s[i];
        }
    }
    rep(i,n){
        cout << ans[i] << endl;
    }

    
    
    

    return 0;
}