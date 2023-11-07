#include <bits/stdc++.h>

using namespace std;

int main(){

    double a,b,c,x;
    cin >> a >> b >> c >> x;

    double ans;
    if(a >= x){
        ans = 1.0000000000;
    }
    else if(a+1 <= x && x <= b){
        ans = (double)c/(b-a);
    }
    else{
        ans = 0.0000000000;
    }

    cout << ans << setprecision(15) << endl;


    return 0;
}