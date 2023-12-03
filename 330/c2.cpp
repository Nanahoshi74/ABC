#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long D;
    cin >> D;

    // Dが平方数の場合
    if (sqrt(D) == floor(sqrt(D))) {
        cout << 0 << endl;
    } else {
        long long x = ceil(sqrt(D));
        long long y = x * x - D;
        if (y >= (2 * x - 1)) {
            cout << (2 * x - 1) << endl;
        } else {
            cout << y << endl;
        }
    }

    return 0;
}
