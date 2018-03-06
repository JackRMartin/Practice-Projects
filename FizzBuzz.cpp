// FizzBuzz in C++
// Jack Martin
// This program will output numbers 1-100, but if the number is divisible by 3, output Fizz. If number is divisible by 5 output Buzz
// If the number is divisible by 3 and 5, output FizzBuzz.

#include <iostream>	

int main()
{

	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			std::cout << "Fizz";
		}
		if(i % 5 == 0)
		{
			std::cout << "Buzz";
		}
		if (!(i % 3 == 0 || i % 5 == 0))
		{
			std::cout << i;
		}
		std::cout << std::endl;
	}

	
	system("pause");
	return 0;
}
