#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll ;
using namespace std;

int main(){

    int h,w;
    cin >> h >> w;
    vector<vector<ll>> a(h,vector<ll> (w));
    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
        }
    }

    vector<vector<ll>> b(w,vector<ll> (h));

    rep(i,h){
        rep(j,w){
            if(i != j){
                b[j][i] = a[i][j];
            }
            else{
                b[j][i] = a[i][j];
            }
        }
    }

    rep(i,w){
        rep(j,h){
            cout << b[i][j] << " "; 
            if(j == h-1)
            cout << endl;
        }
    }

    return 0;
}