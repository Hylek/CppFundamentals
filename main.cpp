#include <iostream>

void helloWorld()
{
	// :: Is known as the scope resolution operator.
	// std is a namespace, namespaces prevents conflicts and keeps cohesion high.
	// << Is known as the stream insertion operator
	// The middle section is a string literal constant showed as ""

	std::cout << "Hello, World!" << std::endl;
}

void variablesAndDataTypes()
{
	int number; // Simply; An int is a whole number, 4 bytes
	number = 21; // a literal constant, = is the assignment operator

	double aDouble = 3.14159; // High precision number type, can accomodate numbers with decimal place, 8 bytes
}

int main()
{
	helloWorld();
	variablesAndDataTypes();

	return 0;
}