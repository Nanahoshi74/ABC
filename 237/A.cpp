#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    if(-pow(2,31) <= n && pow(2,31) > n)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;

    return 0;
}