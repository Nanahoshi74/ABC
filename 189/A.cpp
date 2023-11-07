#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    char a,b,c;
    cin >> a >> b >> c;
    if(a == b && b == c) cout << "Won" << endl;
    else cout << "Lost" << endl;

    return 0;
}