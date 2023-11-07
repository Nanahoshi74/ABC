#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }

    int ans = 1;

    sort(a.begin(),a.end());

    rep(i,n-1){
        if(a.at(i) != a.at(i+1)){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}