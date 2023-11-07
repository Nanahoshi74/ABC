#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    char a1,b1,c1,d1;
    cin >> a1 >> b1 >> c1 >> d1;
    ll a,b,c,d;
    a = a1 - '0';
    b = b1 - '0';
    c = c1 - '0';
    d = d1 - '0';
    ll ans = 0;
    if(a == b && b == c && c == d){
        ans = 3;
    }
    else{
        if(a == 9){
            if(b == 0){
                ans++;
            }
        }
        if(b == a + 1){
            ans++;
        }
        if(b == 9){
            if(c == 0){
                ans++;
            }
        }
        if(c == b+1){
            ans++;
        }
        if(c == 9){
            if(d == 0){
                ans++;
            }
        }
        if(d == c+1){
            ans++;
        }
    }
    if(ans == 3) cout << "Weak" << endl;
    else cout << "Strong" << endl;

    return 0;
}