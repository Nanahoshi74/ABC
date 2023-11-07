#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    rep(i,q){
        int x;
        cin >> x;
        int j = lower_bound(a.begin(),a.end(),x)-a.begin();
        int ans = n- j;
        cout << ans << endl;
    }



    return 0;
}