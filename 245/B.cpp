#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int x = *max_element(a.begin(),a.end());
    //int y = *min_element(a.begin(),a.end());

    vector<bool> b(x+2,true);
    rep(i,n){
        b.at(a[i]) = false;
    }
    rep(i,x+2){
        if(b[i] == true){
        cout << i << endl;
        return 0;
        }
    }
 

    return 0;
}