#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string x;
    cin >> x;
    string ans;
    rep(i,x.size()){
        if(x[i] == '.'){
            break;
        }
        else{
            ans += x[i];
        }
    }

    cout << ans << endl;

    return 0;
}