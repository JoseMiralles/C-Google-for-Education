// hello.cpp: Jose Miralles
// Description: A simple Hello world program.

#include <iostream>
using namespace std;

void doPrinting(int cols = 4, int rows = 6) {
	for (int i = 0; i < cols; i++) {
		for (int x = 0; x < rows; x++) {
			cout << "Hello World! ";
		}
		cout << endl;
	}
}

int main() {
	doPrinting();
	return 0;
}