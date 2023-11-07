#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<ll> p;
    p.push_back(a * c);
    p.push_back(a * d);
    p.push_back(b * c);
    p.push_back(b * d);

    cout << *max_element(p.begin(),p.end()) << endl;

    return 0;
}