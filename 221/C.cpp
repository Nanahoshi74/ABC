#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string n;
    cin >> n;

    ll len = n.length();
    ll ans = 0;
    sort(n.begin(),n.end());
    do{
        rep(i,len-1){
            string s;
            s = n.substr(0,i+1);
            string t;
            t = n.substr(i+1);
            if(s[0] == '0' || t[0] == '0') continue;
            else{
                ll x = stoll(s)*stoll(t);
                ans = max(ans,x);
            }
        }
    }while(next_permutation(n.begin(),n.end()));


    cout << ans << endl;



    return 0;
}