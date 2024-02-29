#include <iostream>
#include <algorithm>

using namespace std;

long long getFactor(long long n, long long m, long long k) {
    long long cnt = 0;
    for(long long i = 1; i*i <= min(n, m); i++) {
        if(n % i == 0 && m % i != 0) {
            cnt++;
            if(cnt == k) return i;
        }
        if(i*i != min(n, m) && n % (min(n, m)/i) == 0 && m % (min(n, m)/i) != 0) {
            cnt++;
            if(cnt == k) return min(n, m)/i;
        }
    }
    return -1;
}

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    long long result = getFactor(n, m, k);
    if(result == -1) {
        cout << "No solution\n";
    } else {
        cout << result << endl;
    }

    return 0;
}
