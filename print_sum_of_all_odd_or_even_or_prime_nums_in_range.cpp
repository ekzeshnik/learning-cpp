int print_sum_of_all_odd_or_even_or_prime_nums_in_range() {
    int rangeBeginning, rangeEnd, isNumberPrime, isNumberOdd, userChoice, sum = 0;

    std::cout << "Enter the range (ex: 1 20): ";
    std::cin >> rangeBeginning >> rangeEnd;
    std::cout << std::endl;

    if (rangeBeginning > rangeEnd) {
        std::cout << "Beginning of the range cannot be bigger from the end.\n";
        exit(0);
    }

    std::cout << "What sum would you like to output?\n" << " 1) Summ of all odd numbers from your range\n 2) Summ of all even numbers from your range\n 3) Summ of all prime numbers from your range \nChoice: ";
    std::cin >> userChoice;

    switch (userChoice) {
        case 1:
            for (int checkIfNumberIsOdd = rangeBeginning; checkIfNumberIsOdd <= rangeEnd; checkIfNumberIsOdd++) {
                if (checkIfNumberIsOdd % 2 != 0) {
                    sum += checkIfNumberIsOdd;
                }
            }
            std::cout << "\nSum of all odd numbers in the range from " << rangeBeginning << " to " << rangeEnd << " is " << sum << std::endl;
            break;

        case 2:
            for (int checkIfNumberIsEven = rangeBeginning; checkIfNumberIsEven <= rangeEnd; checkIfNumberIsEven++) {
                if (checkIfNumberIsEven % 2 == 0) {
                    sum += checkIfNumberIsEven;
                }
            }
            std::cout << "\nSum of all even numbers in the range from " << rangeBeginning << " to " << rangeEnd << " is " << sum << std::endl;
            break;

        case 3:
            for (int checkIfNumberIsPrime = rangeBeginning; checkIfNumberIsPrime <= rangeEnd; checkIfNumberIsPrime++) {
                int sqrtDividers = std::sqrt(checkIfNumberIsPrime);
                bool isNumberPrime = true;
                
                if (checkIfNumberIsPrime == 1) {
                    continue;
                }

                for (int allDividers = 2; allDividers <= sqrtDividers; allDividers++) {
                    if (checkIfNumberIsPrime % allDividers == 0) {
                        isNumberPrime = false;
                        break;
                    }
                }
                if (isNumberPrime) {
                    std::cout << checkIfNumberIsPrime << std::endl;
                    sum += checkIfNumberIsPrime;
                } 
            }
            std::cout << "\nSum of all prime numbers in the range from " << rangeBeginning << " to " << rangeEnd << " is " << sum << std::endl;
            break;

        default:
            std::cout << "There is no " << userChoice << " option.\n";
            exit(0);
    }
    return 0;
}


int main()
{
    print_sum_of_all_odd_or_even_or_prime_nums_in_range();
}

