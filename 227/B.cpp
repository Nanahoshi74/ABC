#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> s(n);
    rep(i,n) cin >> s[i];
    int ans = n;

   rep(p,n){
       bool ok = false;
    for(int i=1;i<400;i++){
        for(int j=1;j<400;j++){
            if(s[p] == 4*i*j + 3*i + 3*j){
                ans--;
                ok = true;
                break;
            } 
        }
        if(ok) break;
    }
  }

  cout << ans << endl;


    

    return 0;
}