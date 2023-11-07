#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<vector<ll>> s(n);

    rep(i,n){
        repi(j,0,i){
            if(j == 0 || j == i){
                s[i].push_back(1);
            }
            else{
                s[i].push_back(s[i-1][j-1] + s[i-1][j]);
            }
        }
    }

    rep(i,n){
        repi(j,0,i){
            cout << s[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}