#include <iostream>
using namespace std;

int main()
{

	double num1, num2, result;
	char op;

	cout << "Input your first number." << endl;
	cin >> num1;


	cout << "Input your operator." << endl << "As for now this Calculator only supports the basic operators." << endl;
	cin >> op;

	while (true)
	{
		// Checks whether the input is valid. (Operator)
		if (op == '+' || op == '-' || op == '*' || op == '/')
		{
			//Exit the loop if valid.
			break;
		}
		else
		{
			cout << "What you've entered is not an operator. \
		    	As for now this Calculator only supports the basic operators. Which are Addition, Subtraction, Multiplication, Division.\
		    	(Note it also supports Equal but thats only for result not cannot be used if asked." << endl << "Input your operator." << endl;
			cin >> op;
		}
	}


	cout << "Input your second number." << endl;
	cin >> num2;
	

	if (op == '+')
	{
		result = num1 + num2;
		cout << result;
	}
	else if (op == '-')
	{
		result = num1 - num2;
		cout << result;
	}
	else if (op == '*')
	{
		result = num1 * num2;
		cout << result;
	}
	else if (op == '/')
	{
		result = num1 / num2;
		cout << result;
	}
	else
	{
		cout << "This is an invalid arithmetic operation.If it is the programs fault, create an issue in this <a href = 'https://github.com/ZHassanQ/Calcu-Train'>github page.< / a>" << endl;
	}
	return 0;
}