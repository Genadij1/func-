#include <iostream>
#include <cstdlib>
using namespace std;

void dos(int number1, int number2) {

	int i, sum = 0, k, j;
	for (i = number1; i <= number2; i++)
		for (k = 1, j = 1; k < i; j++, k++) {
			if (i % j == 0) {
				sum += j;
			}
			if (sum == i) {
				cout << i << " ";
				sum = 0;
			}
		}
}

int main() {

	int number1, number2;
	cout << "Enter the number 1: ";
	cin >> number1;
	cout << "Enter the number 2: ";
	cin >> number2;

	dos(number1,number2);

	//system("pause>nul");
	return 0;
}