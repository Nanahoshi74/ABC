#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main(){

    long long int x;
    cin >> x;

    long long int ans;

    if(x > 0){
        ans = x/10;
    }
    else if(x < 0 && x % 10 != 0){
        ans = x/10-1;
    }
    else{
        ans = x/10;
    }

    cout << ans << endl;
    return 0;
}