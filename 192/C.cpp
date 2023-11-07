#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n,k;
    cin >> n >> k;
    ll ans = n;
    string ans2 = to_string(n);
    string a,b;
    ll c,d;
    rep(i,k){
        a = ans2; b = ans2;
        sort(a.rbegin(),a.rend());
        sort(b.begin(),b.end());
        if(b.size() == 1 && b == "0"){
            cout << 0 << endl;
            return 0;
        }
        else if(b[0] == '0'){
            b = b.substr(1);
        }
        c = stoll(a);
        d = stoll(b);
        if(c > d){
            ans = stoll(a)-stoll(b);
        }
        else{
            ans = stoll(b)-stoll(a);
        }
        ans2 = to_string(ans);
    }

    cout << ans << endl;


    return 0;
}