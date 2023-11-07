#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<pair<ll,string>> s(n);
    rep(i,n){
        cin >> s[i].second >> s[i].first;
    }
    sort(s.rbegin(),s.rend());

    cout << s[1].second << endl;

    return 0;
}