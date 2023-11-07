#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;

    if(s[s.size()-1] == 's'){
        cout << s << "es" << endl;
    }
    else cout << s << 's' << endl;

    return 0;
}