#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n >= 42)
    cout << "AGC0" << n+1 << endl;
    if(n < 10)
    cout << "AGC00" << n << endl;
    if(n >= 10 && n < 42)
    cout << "AGC0" << n << endl;


    return 0;
}