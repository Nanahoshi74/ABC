#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;

    int a,b;
    cin >> a >> b;

    char p = s[a-1];
    s[a-1] = s[b-1];
    s[b-1] = p;

    cout << s << endl;




    return 0;
}