#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n,k,a;
    cin >> n >> k >> a;
    int ans;
    int h = k % n;
    vector<int> b;
    int x = a;
    rep(i,n-a+1){
        b.push_back(x);
        x++;
    }
    rep(i,a-1){
        b.push_back(i+1);
    }

    if(h == 0)
    cout << b[n-1] << endl;
    else
    cout << b[h - 1];




    

    return 0;
}