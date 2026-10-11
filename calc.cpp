#include <iostream>

using namespace std;

int main() {
	cout << "===CALCULATOR===\n";
	cout << "Enter first number\n";
	double a, b;
	cin >> a;
	cout << "Enter second number\n";
	cin >> b;
	cout << "Enter symbol(/, *, +, -)\n";
	char sym;
	cin >> sym;
	switch(sym) {
		case '/':
			if (b == 0) {
				cout << "You cannot divide by zero!\n";
			}
			else {
				cout << a/b << "\n";
			}
			break;
		case '*':
			cout << a*b << "\n";
			break;
		case '+':
			cout << a+b << "\n";
			break;
		case '-':
			cout << a-b << "\n";
			break;
	}
	return 0;
}
