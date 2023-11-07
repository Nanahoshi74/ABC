#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    bool ans = false;

    if(a == 1 && b == 10){
        ans = true;
    }
    else if(a == 10 && b == 1){
        ans = true;
    }
    else if(a == b + 1){
        ans = true;
    }
    else if(a == b-1){
        ans = true;
    }

    if(ans)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;







    return 0;
}