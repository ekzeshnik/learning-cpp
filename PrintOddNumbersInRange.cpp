#include<iostream>
#include<cmath>


int printAllPrimeNumbersInRange() {
    int beginningRange, endRange;

    std::cout << "Hello, this programs will calculate and print all prime numbers in set range." << std::endl;
    std::cout << "Enter range (ex: 1 20): ";
    std::cin >> beginningRange >> endRange;

    for (int startRange = beginningRange; startRange <= endRange; startRange++) {
        if (startRange < 2) continue;

        bool isPrime = true;
        int sqrtStartRange = std::sqrt(startRange);

        for (int checkingInt = 2; checkingInt <= sqrtStartRange; checkingInt++) {
            if (startRange % checkingInt == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) { std::cout << startRange << std::endl; }
    }
    return 0;
}


int main() {

    printAllPrimeNumbersInRange();

    return 0;
}