#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    rep(i,s.size()){
        if(s[i] == '6'){
            s[i] = '9';
        }
        else if(s[i] == '9'){
            s[i] = '6';
        }
    }

    cout << s << endl;

    return 0;
}