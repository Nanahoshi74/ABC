#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> b(n+1,vector<ll>(m+1));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin >> b[i][j];
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
         if(i >= 2){
            if(b[i][j] != b[i-1][j] + 7){
                cout << "No" << endl;
                return 0;
            }
        }
         if(j >= 2){
            if(b[i][j] != b[i][j-1] + 1){
                cout << "No" << endl;
                return 0;
            }
         }
         if(j != m){
             if(b[i][j] % 7 == 0){
                 cout << "No" << endl;
                 return 0;
             }
         } 
        }
    }

    cout << "Yes" << endl;

    return 0;
}