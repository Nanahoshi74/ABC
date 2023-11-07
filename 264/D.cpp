#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;

    ll ans = 0;
    map<char,ll> mp;
    mp['a'] = 0;
    mp['t'] = 1;
    mp['c'] = 2;
    mp['o'] = 3;
    mp['d'] = 4;
    mp['e'] = 5;
    mp['r'] = 6;
    
    while(true){
        if(s == "atcoder"){
            cout << ans << endl;
            return 0;
        }
        rep(i,s.size()-1){
            if(mp[s[i]] > mp[s[i+1]]){
                swap(s[i],s[i+1]);
                ans++;
            }
             if(s == "atcoder"){
            cout << ans << endl;
            return 0;
        }
        }
         if(s == "atcoder"){
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}