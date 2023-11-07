#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<string> s(3);
    rep(i,3){
        cin >> s[i];
    }
    vector<bool> fl(4,false);
    rep(i,3){
        if(s[i] == "ABC"){
            fl[0] = true; 
        }
        else if(s[i] == "ARC"){
            fl[1] =  true;
        }
        else if(s[i] == "AGC"){
            fl[2] = true;
        }
        else if(s[i] == "AHC"){
            fl[3] = true;
        }
    }
    if(fl[0] == false) cout << "ABC" << endl;
    else if(fl[1] ==false) cout << "ARC" << endl;
    else if(fl[2] == false) cout << "AGC" << endl;
    else cout << "AHC" << endl;


    return 0;
}