#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    for(int i=1;i<10000;i++){
        for(int j=1;j<10000;j++){
            if(pow(i,j) == pow(j,1)){
                cout << i << " " << j << endl;
            }
        }
    }



    return 0;
}