// main.cpp: Jose Miralles
// Description: A simple cin example.

#include <iostream>

using namespace std;

int main()
{
	int input_var = 0;

	do {
		cout << "Enter a number (-1 = quit): ";
		if (!(cin >> input_var)) {
			cout << "Input was non-numeric, please enter numeric value." << endl;
			cin.clear();
			cin.ignore(10000, '\n'); // Ignore up to 1,000 characters.
		}
		else if (input_var != -1) {
			cout << "You entered: " << input_var << endl;
		}
	} while (input_var != -1);
	cout << "All done." << endl;
	return 0;
}