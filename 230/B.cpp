#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    string t;
    rep(i,pow(10,5)){
        t += "oxx";
    }
    int i = t.find(s);
    if(i == string::npos)
    cout << "No" << endl;
    else
    cout << "Yes" << endl;



    return 0;
}