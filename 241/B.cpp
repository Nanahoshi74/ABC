#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    rep(i,n){
        cin >> a[i];
    }
    rep(i,m){
        cin >> b[i];
    }

    bool ans;
    vector<bool> men(n);
    rep(i,n){
        men[i] = true;
    }
    rep(i,m){
        ans = false;
        rep(j,n){
            if(men[j] == true && b[i] == a[j]){
                men[j] = false;
                ans = true;
                break;
            }
        }
         if(ans == false){
             break;
         }
    }

    if(ans)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;


    return 0;
}