#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    if(b >= c && d >= b){
        if(a <= c){
            cout << b - c << endl;
        }
        else{
            cout << b-a << endl;
        }
    }
    else if(b <= c || d <= a){
        cout << 0 << endl;
    }
    else if(b >= c && c <= a){
        cout << d-a << endl;
    }
    else{
        cout << d-c << endl;
    }

    

    return 0;
}