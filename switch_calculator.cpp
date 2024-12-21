#include <iostream>

int switch_calculator() {
    long double firstNumber, secondNumber, resultate;
    char calculatorOperator;

    std::cout << "Enter 2 numbers: ";
    std::cin >> firstNumber >> secondNumber;
    std::cout << "Enter operator (+, -, /, *, %): ";
    std::cin >> calculatorOperator;

    switch (calculatorOperator) {
        case '+':
            resultate = firstNumber + secondNumber;
            std::cout << firstNumber << " + " << secondNumber << " = " << resultate << std::endl;
            break;
        case '-':
            resultate = firstNumber - secondNumber;
            std::cout << firstNumber << " - " << secondNumber << " = " << resultate << std::endl;
            break;
        case '/':
            resultate = firstNumber / secondNumber;
            std::cout << firstNumber << " / " << secondNumber << " = " << resultate << std::endl;
            break;
        case '*':
            resultate = firstNumber * secondNumber;
            std::cout << firstNumber << " * " << secondNumber << " = " << resultate << std::endl;
            break;
        case '%':
            resultate = int(firstNumber) % int(secondNumber);
            std::cout << firstNumber << " % " << secondNumber << " = " << resultate << std::endl;
            break;

        default: 
            std::cout << calculatorOperator << " option does not exist." << std::endl;
    }
    return 0;
}


int main()
{
    switch_calculator();
}

