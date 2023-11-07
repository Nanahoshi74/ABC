#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    string s;
    cin >> s;

    bool ok = true;
    rep(i,s.size()){
        if((i+1)%2 == 1){
            if(s[i] < 'a'){
                ok = false;
            }
        }
        else if((i+1)%2 == 0){
            if(s[i] >= 'a'){
                ok = false;
            }
        }
        if(!ok){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}