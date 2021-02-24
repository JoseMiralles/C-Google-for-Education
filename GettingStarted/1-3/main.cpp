// hello.cpp: Jose Miralles
// Description: A simple Hello world program.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setiosflags(ios::left);
	for (int i = 0; i <= 6; i++) {
		for (int x = 0; x <= 4; x++) {
			cout << setw(17) << "Hello World!";
		}
		cout << endl;
	}
	return 0;
}