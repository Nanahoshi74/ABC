#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string n;
    cin >> n;
    ll k = n.size()-1;
    string ans;
    if(n[k] == '2' || n[k] == '4' || n[k] == '5' || n[k] == '7' || n[k] == '9'){
        ans = "hon";
    }
    else if(n[k] == '0' || n[k] == '1' || n[k] == '6' || n[k] == '8'){
        ans = "pon";
    }
    else ans = "bon";

    cout << ans << endl;

    return 0;
}