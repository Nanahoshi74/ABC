#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b;
    cin >> a >> b;

    if(a <= b && a*6 >= b){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;
}