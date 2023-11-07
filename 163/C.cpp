#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<vector<ll>> G(n+1);
    for(int i = 2; i <= n; i++){
        ll a;
        cin >> a;
        G[a].push_back(i);
    }
    for(int i = 1; i <=n ; i++){
        cout << G[i].size() << endl;   
    }

    return 0;
}