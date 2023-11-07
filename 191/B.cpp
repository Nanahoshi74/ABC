#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    ll x;
    cin >> x;
    vector<ll> a(n);
    rep(i,n)  cin >> a[i];
    vector<ll> b;
    rep(i,n){
        if(a[i] != x){
            b.push_back(a[i]);
        }
    }
    for(auto p : b){
        cout << p << " ";
    }
    cout << endl;


    return 0;
}