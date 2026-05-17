#include <iostream>
#include <cmath>

int main() {

    int n;

    std::cout << "Enter number of terms: ";
    std::cin >> n;

    double sum = 0.0;

    for(int i = 1; i <= n; i++) {

        sum += 1.0 / pow(i, n);
    }

    std::cout << "Sum = " << sum << std::endl;

    return 0;
}