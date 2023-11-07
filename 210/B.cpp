#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    string s;
    cin >> s;
    rep(i,n){
        if(s[i] == '1'){
            if(i % 2 == 0){
                cout << "Takahashi" << endl;
                return 0;
            }
            else{
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }

    return 0;
}