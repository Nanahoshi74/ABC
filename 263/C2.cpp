#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

vector<vector<ll>> ans;
ll n,m;

void dfs(vector<ll>a,ll p){
    if(a.size() == n){
        ans.push_back(a);
        return;
    }
    repi(i,p+1,m){
        vector<ll> b = a;
        b.push_back(i);
        dfs(b,i);
    }
}

int main(){

    cin >> n >> m;
    vector<ll> a;
    dfs(a,0);

    rep(i,ans.size()){
        rep(j,n){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}