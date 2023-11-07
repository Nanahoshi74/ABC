#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll y;
    cin >> y;
    if(y % 4 == 2){
        cout << y << endl;
    }
    else if(y % 4 == 0){
        cout << y + 2 << endl; 
    }
    else if(y % 4 == 1){
        cout << y + 1 << endl;
    }
    else if(y % 4 == 3){
        cout << y + 3 << endl;
    }

    return 0;
}