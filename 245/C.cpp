#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;
    vector<vector<int>> a(2,vector<int>(n));
    rep(i,n){
        rep(j,n){
            cin >> a[i][j];
        }
    }
    vector<vector<bool>> dp(n,vector<bool>(2));
    dp[0][0] = dp[0][1] = true;
    for(int i=1;i<n;i++){
        rep(j,2){
            //dp[i][j] = ?
            int pi = i-1;
            rep(pj,2){
                if(dp[pi][pj] == false) continue;
                if(abs(a[pj][pi] - a[j][i]) > k) continue;
                dp[i][j] = true;
            }
        }
    }

    rep(j,2){
        if(dp[n-1][j]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}