#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){

    int n;
    cin >> n;

    int num = 2*n+1;
    int sum = 0;
    vector<bool> a(num+1);
    rep(i,num+1){
        a[i] = false;
    }

   while(sum <= (2*n+1)*(n+1)){

       for(int i=1;i<=num;i++){
           if(a[i] == false){
               cout << i << endl << flush;
               sum += i;
               a[i] = true; 
               break;
           }
       }


        bool ok = false;

        if(sum >= (2*n+1)*(n+1)){
            ok = true;
        }


       if(ok == true){
       cout << 0 << flush;
       break;
       }
        
        int c;
        cin >> c;
        sum += c;
        a[c] = true;

   }

    return 0;
}