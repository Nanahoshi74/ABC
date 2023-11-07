#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    map<string,ll> mp;
    rep(i,n){
        string s;
        cin >> s;
        if(mp[s] == 0){
            cout << s << endl;
        }
        else{
            cout << s << '(' << mp[s] << ')' << endl;
        }
        mp[s]++;
    }



    return 0;
}