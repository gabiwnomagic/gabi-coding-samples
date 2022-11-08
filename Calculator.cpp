// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;
int additionResult = 0;
float divisionResult = 0;
int subtractionResult = 0;


int main()
{
	int choice;
	std::cout << "Please choose the operation you would like to perform\n";

	do
	{
		std::cout << " 1. Addition\n";
		std::cout << " 2. Subtraction\n";
		std::cout << " 3. Multiplication\n";
		std::cout << " 4. Division\n";
		std::cout << " 5. Square\n";
		std::cout << " 6. Power\n";
		std::cout << " 7. Average\n";
		std::cout << " 8. Multiply by PI\n";
		std::cout << " 9. Divide by PI\n";
		std::cout << " 10. Exit\n";
		std::cout << " Enter choice: \n";
		std::cin >> choice;

		if (choice == 1)
		{
			std::cout << "Enter the first number: ";
			std::cin >> firstNumber;

			std::cout << "Enter the second number: ";
			std::cin >> secondNumber;

			int additionResult = firstNumber + secondNumber;

			std::cout << firstNumber << " + " << secondNumber;
			std::cout << " = " << additionResult << endl;
			return 0;
		}
		else if (choice == 2)
		{
			std::cout << "Enter the first number: ";
			std::cin >> firstNumber;

			std::cout << "Enter the second number: ";
			std::cin >> secondNumber;

			int subtractionResult = firstNumber - secondNumber;

			std::cout << firstNumber << " - " << secondNumber;
			std::cout << " = " << subtractionResult << endl;
			return 0;
		}
		else if (choice == 3)
		{
			std::cout << "Enter the first number: ";
			std::cin >> firstNumber;

			std::cout << "Enter the second number: ";
			std::cin >> secondNumber;

			int multiplicationResult = firstNumber * secondNumber;

			std::cout << firstNumber << " x " << secondNumber;
			std::cout << " = " << multiplicationResult << endl;
			return 0;
		}
		else if (choice == 4)
		{
			std::cout << "Enter the first number: ";
			std::cin >> firstNumber;

			std::cout << "Enter the second number: ";
			std::cin >> secondNumber;

			float divisionResult = (float)firstNumber / (float)secondNumber;

			std::cout << (float)firstNumber << " / " << (float)secondNumber;
			std::cout << " = " << divisionResult << endl;
			return 0;
		}
		else if (choice == 5 )
		{
			std::cout << "Enter the first number: ";
			std::cin >> firstNumber;
			
			int multiplicationResult = firstNumber * firstNumber;

			std::cout << firstNumber << " x " << firstNumber;
			std::cout << " = " << multiplicationResult << endl;
			return 0;
		}
		else if (choice == 6 )
		{ 
			std::cout << "Enter number: ";
			std::cin >> firstNumber;
			
			std::cout << "to the power of: ";
			std::cin >> secondNumber;

			multiplicationResult = pow(firstNumber, secondNumber);

			std::cout << firstNumber << " ^ " << secondNumber;
			std::cout << " = " << multiplicationResult << endl;
			return 0;
		}
		else if (choice == 7)
		{
			int i, n;
			float arr[10], sum = 0, avg;
			cout << "Enter total amount of integers ";
			cin >> n;
			cout << "\nEnter " << n << " integers: ";
			for (i = 0; i < n; i++)
			{
				cin >> arr[i];
				sum = sum + arr[i];
			}
			avg = sum / n;
			cout << "\nAverage = " << avg;
			cout << endl;
			return 0;
		}
		else if (choice == 8)
		{
			std::cout << "Enter the first number: ";
			std::cin >> firstNumber;

			float multiplicationResult = (float)firstNumber * PI;

			std::cout << (float)firstNumber << " x PI "; 
			std::cout << " = " << multiplicationResult << endl;

			return 0;
		}
		else if (choice == 9)
		{
			std::cout << "Enter the first number: ";
			std::cin >> firstNumber;

			float divisionResult = (float)firstNumber / PI;

			std::cout << (float)firstNumber << " / PI ";
			std::cout << " = " << divisionResult << endl;

			return 0;
		}

		else if (choice == 10)
		{
			std::cout << "Exiting\n";
		}
		else 
			std::cout << "Invalid choice\n";
	} while (choice != 10); return 0;

	
	}
		
 


