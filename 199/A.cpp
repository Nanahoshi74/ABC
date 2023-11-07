#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c;
    cin >> a >> b >> c;
    if(a*a + b*b < c*c){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;
}