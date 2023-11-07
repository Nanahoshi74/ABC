#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c;
    cin >> a >> b >> c;
    map<ll,ll> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    repi(i,1,9){
        if(mp[i] == 2){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}