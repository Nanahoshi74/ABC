#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

ll pow2(ll suji,ll n){
    ll kaesu = 1;
    for(ll i=0;i<n;i++){
        kaesu *= suji;
    }
    return kaesu;
}

int main(){

    ll n;
    cin >> n;
    string dp = "";
    dp += '1';
    string dp2;
    vector<ll> p;
    for(int i=2;i<=n;i++){
        /*if(i > 10){
        dp += " ";
        }*/
        dp2 = dp;
        if(i >= 10){
            dp += " ";
            int p = i%10;
            int q = i/10;
            dp += '0' +q;
            dp += '0' +p;
        }
        else{
            dp += " ";
            dp += '0' + i;
        }
        dp += " ";
        dp += dp2;

    }

    //reverse(dp.begin(),dp.end());
    reverse(p.begin(),p.end());
    for(ll i=0;i<dp.size();i++){
        
        cout << dp[i];
    }

    cout << endl;


    return 0;
}