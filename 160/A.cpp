#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    if(s[2] == s[3] && s[4] == s[5]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}