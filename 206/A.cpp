#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

        
    ll n;
    cin >> n;
    ll ans = 0;
    ans = 1.08 * n;

    if(ans < 206) cout << "Yay!" << endl;
    else if(ans == 206) cout << "so-so" << endl;
    else cout << ":(" << endl;

    return 0;
}