#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll d,t,s;
    cin >> d >> t >> s;

    if((double)d/s <= t) cout << "Yes" << endl;
    else cout << "No" << endl; 

    return 0;
}