#include <iostream>
#include <string>
using namespace std;

int main()
{
	double nums[100];
	int num_counter = 0;

	char op;
	char ops[] = { '+', '-', '*', '/' };
	int op_counter = 0;

	double results;


	while (true)
	{
		// Prompt the user to enter a number.
		cout << "Enter a number. (Or `c` to continue)" << endl;
		string input;
		cin >> input;

		while (input == "c")
		{
			// Check whether the user entered a 2 number at least before. (If yes break, if not continue)
			if (num_counter >= 2)
			{
				break;
			}
			else
			{
				cout << "You haven't entered the minimum numbers required, which is at least 2 numbers." << endl << \
					"Enter a number." << endl;
				cin >> input;
				continue;
			}
		}

		// Convert the input to "double" after it being checked that's it's a number.
		double num = stod(input);

		// Add (Store) the number to array.
		nums[num_counter] = num;
		num_counter++;


		// Checks if the user is using the program again to not ask for invalid (More than required) operators.
		while (num_counter != op_counter && op_counter >= 1)
		{
			cout << "You've entered" << num_counter << "numbers and" << op_counter << "operators." << endl << \
				"If you want to finish and calculate enter 'f' letter." << endl << \
				"If you want to enter more numbers enter 'c' letter." << endl;

			char input;
			cin >> input;

			// Check whether the user entered a 'f' or 'c' or 'r' letter. (If other will ask again)
			if (input == 'f')
			{
				// Perform the calculation.
			}
			else if (input == 'c')
			{
				break;
			}
			else
			{
				cout << "You've not entered 'f' or 'c' letter.";
				cin >> input;
			}


			// Operator
			cout << "Input your operator." << endl << "As for now this Calculator only supports the basic operators." << endl;
			cin >> op;

			while (true)
			{
				// Checks whether the input is valid. (Operator)
				if (op == '+' || op == '-' || op == '*' || op == '/')
				{
					// Exit the loop if valid.
					break;
				}

				else
				{
					// Why it's not a valid operator.
					cout << "What you've entered is not an operator. As for now this Calculator only supports the basic operators. Which are Addition, Subtraction, Multiplication, and Division."
						<< endl << "Input your operator." << endl;
					cin >> op;
				}
			}

			// Add (Store) the operator to array.
			ops[op_counter] = op;
			op_counter++;

			while (num_counter == op_counter + 1)
			{
				cout << "You've entered" << num_counter << "numbers and" << op_counter << "operators." << endl << \
					"If you want to finish and calculate enter 'f' letter." << endl << \
					"If you want to enter more numbers enter 'c' letter." << endl << \
					"If you want to reset all stored data to zero enter 'r' letter." << endl;

				char input;
				cin >> input;

				// Check whether the user entered a 'f' or 'c' or 'r' letter. (If other will ask again)
				if (input == 'f')
				{
					// Perform the calculation.
				}
				else if (input == 'c')
				{
					break;
				}
				else if (input == 'r')
				{
					num_counter = 0;
					op_counter = 0;

					cout << "All stored data have been reset to zero.";
					break;
				}
				else
				{
					cout << "You've not entered 'f' or 'c' or 'r' letter.";
					cin >> input;
				}
			}
		}
	}
	return 0;
}
