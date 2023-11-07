#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll k;
    cin >> k;

    ll a,b;
    a = 21,b = 0;

    if(k < 60){
        b += k;
    }
    else{
        b += (k-60);
        a++;
    }
    if(b < 10){
        cout << a << ':' << '0' << b << endl;
    }
    else{
        cout << a << ':' <<  b << endl;
    }


    return 0;
}