#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s1,s2,s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    string t;
    cin >> t;
    ll len = t.size();


    string ans;
    rep(i,len){
        int c = t[i]-'0';
        if(c == 1) ans += s1;
        else if(c == 2) ans += s2;
        else ans += s3;
    }

    cout << ans << endl;



    return 0;
}