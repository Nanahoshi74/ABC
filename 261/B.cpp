#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<string> a(n);
    rep(i,n) cin >> a[i];

    rep(i,n){
        rep(j,n){
            if(a[i][j] == '-'){
                break;
            }
            else{
                ll li = i;
                ll lj = j;
                if(a[i][j] == 'W'){
                    if(a[lj][li] != 'L'){
                        cout << "incorrect" << endl;
                        return 0;
                    }
                }
                else if(a[i][j] == 'L'){
                    if(a[lj][li] != 'W'){
                        cout << "incorrect" << endl;
                        return 0;
                    }
                }
                else{
                    if(a[lj][li] != 'D'){
                        cout << "incorrect" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "correct" << endl; 

    return 0;
}