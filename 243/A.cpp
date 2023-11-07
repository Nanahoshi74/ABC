#include <bits/stdc++.h>

using namespace std;

int main(){

    int v,a,b,c;
    cin >> v >> a >> b >> c;

    int i = 0;

    while(v > 0){
        if(i % 3 == 0){
            v -= a;
        }
        else if(i % 3 == 1){
            v -= b;
        }
        else if(i % 3 == 2){
            v -= c;
        }
        if(v < 0){
            break;
        }
        if(v == 0){
           i += 1;
           break;
        }
        i++;
    }

    if(i % 3 == 0){
        cout << 'F' << endl;
    }
    else if(i % 3 == 1){
        cout << 'M' << endl;
    }
    else{
        cout << 'T' << endl;
    }


    return 0;
}