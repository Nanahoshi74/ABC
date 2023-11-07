#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,x;
    cin >> n >> x;
    string s;
    cin >> s;

    rep(i,n){
        if(s[i] == 'o'){
            x++;
        }
        else{
            if(x == 0) continue;
            else x--;
        }
    }

    cout << x << endl;

    return 0;
}