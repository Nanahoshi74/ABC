#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll k;
    cin >> k;
    string s;
    cin >> s;
    if(s.size() > k){
        cout << s.substr(0,k) << "..." << endl;
    }
    else cout << s << endl;

    return 0;
}