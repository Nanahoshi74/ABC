#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;


int main(){

    ll k;
    cin >> k;
    string s;
    while(k > 0){
        s += '0' + (k % 2)*2;
        k /= 2;
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}