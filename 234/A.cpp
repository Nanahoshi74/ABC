#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int t;
    cin >> t;
    int ft = t*t + 2*t + 3;
    int ftpt = ft + t;
    int ftft = ftpt*ftpt + 2*ftpt + 3;
    int fft = ft*ft + 2*ft + 3;
    int p = ftft + fft;
    int ans = p*p + 2*p + 3;

    cout << ans << endl;


    return 0;
}