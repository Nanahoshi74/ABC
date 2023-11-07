#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    vector t(n,vector<ll>(n));
    rep(i,n){
        rep(j,n){
            cin >> t[i][j];
        }
    }
    string s;
    repi(i,2,n){
        s += i +'0';
    }
    vector<vector<ll>> a;
    do{
        vector<ll> b;
        b.push_back(1);
        rep(i,n-1){
            ll p = s[i]-'0';
            b.push_back(p);
        }
        b.push_back(1);
        a.push_back(b);
    }while(next_permutation(s.begin(),s.end()));
    ll ans = 0;
    rep(i,a.size()){
        ll cnt = 0;
        rep(j,a[i].size()-1){
            cnt += t[a[i][j]-1][a[i][j+1]-1];
        }
        if(cnt == k) ans++;
    }

    cout << ans << endl;





    return 0;
}