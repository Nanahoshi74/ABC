#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int x;
    cin >> x;
    if(x >= 0 && x < 40){
        cout << 40-x << endl;
    }
    else if(x >= 40 && x < 70){
        cout << 70-x << endl;
    }
    else if(x >= 70 && x < 90){
        cout << 90-x << endl;
    }
    else{
        cout << "expert" << endl;
    }
    return 0;
}