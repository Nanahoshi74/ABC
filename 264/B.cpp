#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = a; i <= (int)(b); i++)
typedef long long ll;
using namespace std;

int main(){

    ll r,c;
    cin >> r >> c;
    r--; c--;
    vector<string> s;
    string k;
    k = "111111111111111";
    s.push_back(k);
    k = "100000000000001";
    s.push_back(k);
    k = "101111111111101";
    s.push_back(k);
    k = "101000000000101";
    s.push_back(k);
    k = "101011111110101";
    s.push_back(k);
    k = "101010000010101";
    s.push_back(k);
    k = "101010111010101";
    s.push_back(k);
    k = "101010101010101";///
    s.push_back(k);//
    k = "101010111010101";
    s.push_back(k);
    k = "101010000010101";
    s.push_back(k);
    k = "101011111110101";
    s.push_back(k);
    k = "101000000000101";
    s.push_back(k);
    k = "101111111111101";
    s.push_back(k);
    k = "100000000000001";
    s.push_back(k);
    k = "111111111111111";
    s.push_back(k);
    if(s[r][c] == '1'){
        cout << "black" << endl;
    }
    else{
        cout << "white" << endl;
    }

    


    return 0;
}