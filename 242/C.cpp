#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int NUM(int a){
    string s;
    for(int i=0;i<a;i++){
        s += '9';
    }
    return stoi(s);
}

int main(){

    int n;
    cin >> n;

    long long int num = 0;

    for(int i=1;i<NUM(n);i++){
        string t = to_string(i);
        for(int j=0;j<n-2;j++){
            if(abs(t[i]-t[i+1]))
        }
    }
















    return 0;
}