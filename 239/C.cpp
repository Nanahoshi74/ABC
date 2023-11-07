#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main(){

    long long int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    bool ans = false;

    vector<pair<long int,long int>> a;
    for(int i=y1-3;i<y1+3;i++){
        for(int j=x1-3;j<x1+3;j++){
            if(pow(x1-j,2)+pow(y1-i,2) == 5){
                a.push_back(make_pair(j,i));
            }
        }
    }

    long long int size = a.size();

    rep(i,size){
        if(pow(x2-a[i].first,2)+pow(y2-a[i].second,2) == 5){
            ans = true;
            break;
        }
    }

    if(ans)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
 

    return 0;
}