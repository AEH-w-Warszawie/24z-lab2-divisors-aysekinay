#include <iostream>
#include <chrono>

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    for (int i = 107; i <= 110; i++) {
        auto start = std::chrono::high_resolution_clock::now();
        int divisors = countDivisors(i);
        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        std::cout << "Number: " << i << ", Divisors: " << divisors << ", Execution time: " << duration.count() << " microseconds" << std::endl;
    }
    return 0;
}