#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    /*char a,b,c;
    cin >> a >> b >> c;
    string abc = string({a,b,c});
    string bca = string({b,c,a});
    string cab = string({c,a,b});*/

    string abc;
    cin >> abc;
    string bca,cab;
    char a,b,c;
    a = abc[0];
    b = abc[1];
    c = abc[2];
    bca += b;
    bca += c;
    bca += a;

    cab += c;
    cab += a;
    cab += b;

    cout << stoi(abc) + stoi(bca) + stoi(cab) << endl;


    return 0;
}