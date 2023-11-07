#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
#define rng(i,a,b) for(int i = a; i < (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    ll n;
    if(s == "Monday") n = 5;
    else if(s == "Tuesday") n= 4;
    else if(s == "Wednesday") n = 3;
    else if(s == "Thursday") n = 2;
    else n = 1;

    cout << n << endl;

    return 0;
}