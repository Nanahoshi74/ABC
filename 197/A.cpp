#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    char a,b,c;
    a = s[0];
    b = s[1];
    c = s[2];
    string t;
    t += b;
    t += c;
    t += a;

    cout << t << endl;

    return 0;
}