#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main(){

    vector<int> a(10);
    rep(i,10) cin >> a[i];

    int ans1 = a[0];
    int ans2 = a.at(ans1);
    int ans = a.at(ans2);



    cout << ans << endl;


    return 0;
}