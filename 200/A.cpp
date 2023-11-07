#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    if(n % 100 == 0){
        cout << n/100 << endl;
    }
    else{
        cout << n/100 + 1 << endl;
    }


    return 0;
}