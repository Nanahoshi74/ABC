#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;

    ll p = 0;

    rep(i,s.size()){
        if(s[s.size()-i-1] == '0'){
            p++;
        }
        else{
            break;
        }
    }
    string t,t2;
    t = s.substr(0,s.size()-p);
    t2 = t;
    reverse(t.begin(),t.end());
    if(t2 == t) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}