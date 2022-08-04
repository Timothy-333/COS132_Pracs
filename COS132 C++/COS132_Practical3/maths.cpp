#include <iostream>
using namespace std;

double linearEquation(int x);
double quadraticEquation(int x);
double exponentialEquation(int x);
int main() 
{
	int x;
	int userOption = 1;
	double results;
	while(userOption != 4)
	{
		cout << "What would you like to do?" << endl
			 << "1) Calculate F(x)" << endl
			 << "2) Calculate G(x)" << endl
			 << "3) Calculate S(x)" << endl
			 << "4) Exit" << endl
			 << "Enter your choice: ";
		cin >> userOption;
		if(userOption >= 4 || userOption <= 0)
			continue;
		cout << "Enter the value of x: ";
		cin >> x;

		switch (userOption)
		{
		case 1:
			results = linearEquation(x);
			break;
		case 2:
			results = quadraticEquation(x);
			break;
		case 3:
			results = exponentialEquation(x);
			break;
		default:
			return 0;
			break;
		}
		cout << "Results = " << results << endl;
	}
	return 0;
}
double linearEquation(int x)
{
	return 3*x - 1;
}
double quadraticEquation(int x)
{
	int a = linearEquation(x);
	return a * a + 3 * a + 4; 
}
double exponentialEquation(int x)
{
	double result = quadraticEquation(x);
	for (size_t i = 0; i < x; i++)
	{
		result *= linearEquation(x);
	}
	
	return result;
}
