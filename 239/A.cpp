#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main(){

    double h;
    cin >> h;

    double ans = sqrt(h*(12800000+h));
    printf("%.10f",ans);



    return 0;
}