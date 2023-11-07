#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;
    vector<bool> a(10,false);
    rep(i,9){
        int p = s[i]-'0';
        a[p] = true;
    }
    rep(i,10){
        if(!a[i]){
            cout << i << endl;
            return 0;
        }
    }


    return 0;
}