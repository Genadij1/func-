#include <iostream>
#include <cstdlib>
using namespace std;

void luckynumber(int number) {
	if (number < 99999 || number>999999) {
		cout << "The number entered is incorrect";
	}
	else {
		int num1 = number / 100000;
		int num2 = number / 10000 % 10;
		int num3 = number / 1000 % 10;
		int num4 = number % 1000/100;
		int num5 = number % 100/10;
		int num6 = number % 10;
		if (num1 + num2 + num3 == num4 + num5 + num6) {
			cout << "Number is lucky!";
		}
		else {
			cout << "Number is not lucky!";
		}
	}
}

int main() {
	int number;
	cout << "Enter number: ";
	cin >> number;
	luckynumber(number);


	system("pause>nul");
	return 0;
}