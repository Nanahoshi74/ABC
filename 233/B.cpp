#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int l,r;
    cin >> l >> r;
    string s;
    cin >> s;
    ll len = s.size();
    string s2 = s.substr(0,l-1);
    string s3 = s.substr(l-1,r-l+1);
    string s4 = s.substr(r,len-r);

    reverse(s3.begin(),s3.end());

    string ans;
    ans += s2;
    ans += s3;
    ans += s4;
 
   

    cout << ans << endl;




    return 0;
}