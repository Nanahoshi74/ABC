#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<string> s(4);
    rep(i,4) cin >> s[i];
    bool a,b,c,d;
    a = false;
    b = false;
    c = false;
    d = false;
    rep(i,4){
        if(s[i] == "H") a = true;
        else if(s[i] == "2B") b = true;
        else if(s[i] == "3B") c = true;
        else if(s[i] == "HR") d = true;
         
    }
    if(a && b && c && d){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }


    return 0;
}