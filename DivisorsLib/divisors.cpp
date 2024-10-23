#include <iostream>
#include <vector>


std::vector<unsigned __int64> divisors(unsigned __int64 n) {
    std::vector<unsigned __int64> divs;
    for (unsigned __int64 i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divs.push_back(i);
        }
    }
    return divs;
}

void printDivisors(const std::vector<unsigned __int64>& divs) {
    for (unsigned __int64 d : divs) {
        std::cout << d << " ";
    }
    std::cout  << std::endl;
}