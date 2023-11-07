#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    string ans = "0";
    if(s[0] == '1'){
        ans += '1';
    }
    else{
        ans += '0';
    }

    if(s[1] == '1'){
        ans += '1';
    }
    else{
        ans += '0';
    }

    if(s[2] == '1'){
        ans += '1';
    }
    else{
        ans += '0';
    }


    cout << ans << endl;
 
 
 
 
   
    return 0;
}