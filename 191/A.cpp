#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll v,t,s,d;
    cin >> v >> t >> s >> d;

    double p = (double)d/v;
    if(t <= p && s >= p) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}