#include<iostream>

int ternaryOperator() {
	int number1, number2, theBiggestNumber;

	std::cout << "Enter 2 numbers: ";
	std::cin >> number1 >> number2;
	theBiggestNumber = (number1 > number2) ? number1 : number2;

	std::cout << "The biggest numbers is " << theBiggestNumber << std::endl;
	return 0;
}

int main() {

	ternaryOperator();

	return 0;
}