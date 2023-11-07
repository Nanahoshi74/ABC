#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c;
    cin >> a >> b >> c;
    bool ans;

    if(c == 0){
        b++;
        if(a >= b){
            ans = true;
        }
        else ans = false;
    }
    else{
        a++;
        if(b >= a){
            ans = false;
        }
        else ans = true;
    }
    if(ans) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
}