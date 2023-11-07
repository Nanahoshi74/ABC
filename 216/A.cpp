#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int a,c;
    char  b;
    cin >> a >> b >> c;
    if(0 <= c && c <= 2){
        cout << a << '-' << endl;
    }
    else if(3 <= c && c <= 6){
        cout << a << endl;
    }
    else{
        cout << a << '+' << endl;
    }

    return 0;
}