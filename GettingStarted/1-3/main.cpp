// hello.cpp: Jose Miralles
// Description: A simple Hello world program.

#include <iostream>
#include <iomanip>
using namespace std;

/// Prints "Hello World! ", 4 times per line, for 6 lines.
void doPrinting(int cols = 4, int rows = 6) {
	for (int i = 0; i < cols; i++) {
		for (int x = 0; x < rows; x++) {
			cout << setw(17) << "Hello World! ";
		}
		cout << endl;
	}
}

int inputExercise() {
	int input_var = 0;

	do {
		cout << "Enter a number, or enter -1 to quit: ";
		// Tries to assign the user input to input_var, which is an integer.
		// Exits if it fails.
		if (!(cin >> input_var)) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Please enter numbers only!" << endl;
			continue;
		}
		if (input_var != -1) {
			cout << "You entered:\t" << input_var << endl;
		}
	} while (input_var != -1);
	cout << "All done." << endl;
	return 0;
}

int printTable() {
	cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
	for (int c = 1; c < 10; c++) {
		cout << c << "| ";
		for (int i = 1; i < 10; i++) {
			cout << i * c << '\t';
		}
		cout << endl;
	}
	return 0;
}



int main() {
	printTable();
	return 0;
}