#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string a,b;
    cin >> a >> b;
    ll s,t;
    s = 0,t = 0;
    rep(i,a.size()){
        int c = a[i] -'0';
        s += c;
    }
    rep(i,b.size()){
        int c = b[i]-'0';
        t += c;
    }
    cout << max(s,t) << endl;


    return 0;
}