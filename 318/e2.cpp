#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    map<int, long long> freq;
    long long count = 0;

    for (int i = 0; i < N; i++) {
        count += freq[A[i]] * (N - i - 1);
        freq[A[i]] += 1;
    }

    cout << count << endl;

    return 0;
}
