#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b;
    cin >> a >> b;

    if(a > b){
        cout << 0 << endl;
        return 0;
          
    }
    else{
        cout << b - a + 1 << endl;
    }

 
    return 0;
}