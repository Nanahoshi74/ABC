#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin >> n;
    string t;
    cin >> t;

    ll x = 0;
    ll y = 0;
    int a = 0;


    rep(i,n){
        if(t[i] == 'R'){
            a++;
            if(a == 4)
            a = 0;
        }
        if(t[i] == 'S'){
            if(a == 0) x++;
            if(a == 1) y--;
            if(a == 2) x--;
            if(a == 3) y++;
         }
    }

    cout << x << " " << y << endl;



    return 0;
}