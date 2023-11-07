#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int ans = 1;//aoki

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a < c)
    ans = 0;
    else if(a == c){
        if(b < d){
            ans = 0;
        }
        else if(b == d)
        ans = 0;
        else
        ans = 1;
    }
    if(ans == 0)
    cout << "Takahashi" << endl;
    else 
    cout << "Aoki" << endl;


    return 0;
}