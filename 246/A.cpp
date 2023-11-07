#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    vector<int> x(3),y(3);
    rep(i,3){
        cin >> x[i] >> y[i];
    }
    int xans,yans;

    if(x[0] == x[1] && x[0] != x[2]){
        xans = x[2];
    }
    else if(x[0] == x[2] && x[0] != x[1]){
        xans = x[1];
    }
    else if(x[1] == x[2] && x[1] != x[0]){
        xans = x[0];
    }

    
    if(y[0] == y[1] && y[0] != y[2]){
        yans = y[2];
    }
    else if(y[0] == y[2] && y[0] != y[1]){
        yans = y[1];
    }
    else if(y[1] == y[2] && y[1] != y[0]){
        yans = y[0];
    }

    cout << xans  << " "<< yans << endl;

    return 0;
}