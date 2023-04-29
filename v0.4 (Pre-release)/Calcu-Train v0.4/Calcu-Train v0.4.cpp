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
		// Number Loop.
		while (true)
		{
			// Prompt the user to enter a number.
			cout << "Enter a number." << endl;

			string input_number;
			cin >> input_number;

			// Validate what the users enters is a number. (If yes "continue;" else restart or ask again)
			if (num_counter == 100)
			{
				// Convert the input to "double" after it being checked that's it's a number.
				double num = stod(input_number);

				// Add (Store) the number to array.
				nums[num_counter] = num;
				num_counter++;
				break;
			}
			else
			{
				cout << "What you've entered is not a valid number." << endl;
				continue;
			}
		}


		// Checks if the user is using the program again to not ask for invalid (More than required) operators.
		while (num_counter != op_counter && op_counter >= 1 && num_counter == op_counter + 1)
		{
			cout << "You've entered " << num_counter << " numbers and " << op_counter << " operators." << endl << \
				"If you want to finish and calculate enter 'f' letter." << endl << \
				"If you want to enter more numbers enter 'c' letter." << endl << \
				"If you want to reset all stored data to zero enter 'r' letter." << endl;

			char input_letter;
			cin >> input_letter;

			// Check whether the user entered a 'f' or 'c' or 'r' letter. (If other will ask again)
			if (input_letter == 'f')
			{
				// Perform the calculation.
				cout << "Do you want to calculate another operation?" << endl;

				string answer;
				cin >> answer;

				if (answer == "yes" || answer == "Yes" || answer == "yEs" || answer == "yeS" || answer == "YEs" || answer == "yES" || answer == "YeS" || answer == "YES")
				{
					num_counter = 0;
					op_counter = 0;

					cout << "All stored data have been reset to zero." << endl;
					break;
				}
				else
				{
					return 0;
				}
			}
			else if (input_letter == 'c')
			{
				break;
			}
			else if (input_letter == 'r')
			{
				num_counter = 0;
				op_counter = 0;

				cout << "All stored data have been reset to zero." << endl;
				break;
			}
			else
			{
				cout << "You've not entered 'f' or 'c' or 'r' letter." << endl;
				continue;
			}


			while (true)
			{
				// Operator
				cout << "Input your operator." << endl << "As for now this Calculator only supports the basic operators." << endl;
				cin >> op;

				// Checks whether the input is valid. (Operator)
				if (op == '+' || op == '-' || op == '*' || op == '/')
				{
					// Store in arrays and exit the loop if valid.
					ops[op_counter] = op;
					op_counter++;
					break;
				}

				else
				{
					// Why it's not a valid operator.
					cout << "What you've entered is not an operator. As for now this Calculator only supports the basic operators. Which are Addition, Subtraction, Multiplication, and Division." << endl;
					continue;
				}
			}

			while (num_counter != op_counter && op_counter >= 1 && num_counter == op_counter + 1)
			{
				cout << "You've entered " << num_counter << " numbers and " << op_counter << " operators." << endl << \
					"If you want to finish and calculate enter 'f' letter." << endl << \
					"If you want to enter more numbers enter 'c' letter." << endl << \
					"If you want to reset all stored data to zero enter 'r' letter." << endl;

				char input_letter;
				cin >> input_letter;

				// Check whether the user entered a 'f' or 'c' or 'r' letter. (If other will ask again)
				if (input_letter == 'f')
				{
					// Perform the calculation.
					cout << "Do you want to calculate another operation?" << endl;

					string answer;
					cin >> answer;

						if (answer == "yes" || answer == "Yes" || answer == "yEs" || answer == "yeS" || answer == "YEs" || answer == "yES" || answer == "YeS" || answer == "YES")
						{
							num_counter = 0;
							op_counter = 0;

							cout << "All stored data have been reset to zero." << endl;
							break;
						}
						else
						{
							return 0;
						}
				}
				else if (input_letter == 'c')
				{
					break;
				}
				else if (input_letter == 'r')
				{
					num_counter = 0;
					op_counter = 0;

					cout << "All stored data have been reset to zero." << endl;
					break;
				}
				else
				{
					cout << "You've not entered 'f' or 'c' or 'r' letter." << endl;
					continue;
				}
			}
				// If he inputed 'c' or 'r' letter. (Loop line 122)
				break;
		}
		// If he inputed 'c' or 'r' letter. (Loop line 48)
		continue;
	}
	return 0;
}