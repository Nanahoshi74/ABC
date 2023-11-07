#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    int p = 0;

    rep(i,q){
        ll t,x;
        cin >> t >> x;
        if(t == 1){
            p = (p-x+n)%n;
        }
        else{
            cout << s[(p+x-1)%n] << endl;
        }
    }



    return 0;
}