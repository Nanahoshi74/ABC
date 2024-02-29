#include <iostream>
#include <vector>

bool isGoodNumber(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            return false; // If any odd digit is found, it's not a good number
        }
        n /= 10;
    }
    return true;
}

int findNthGoodNumber(int N) {
    std::vector<int> goodNumbers;
    int num = 0;

    while (goodNumbers.size() < N) {
        if (isGoodNumber(num)) {
            goodNumbers.push_back(num);
        }
        num++;
    }

    return goodNumbers.back();
}

int main() {
    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    int result = findNthGoodNumber(N);

    std::cout << "The " << N << "th good number is: " << result << std::endl;

    return 0;
}
