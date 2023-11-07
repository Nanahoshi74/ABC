#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s,t;
    cin >> s;
    cin >> t;

    t.pop_back();
    s == t ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}