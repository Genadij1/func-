#include <iostream>
#include <cstdlib>
using namespace std;

void dos(int number1, int number2) {
	int i, sum = 0, k;
	for (i = number1; i <= number2; i++)
		for (k = 1; k < i; k++) {
			if (i % k == 0) {
				sum += k;
				if (sum == i) {
					cout << i << " ";
					sum = 0;
				}
			}
		}
	k = 1;
}

int main() {

	int number1, number2;
	cout << "Enter the number 1: ";
	cin >> number1;
	cout << "Enter the number 2: ";
	cin >> number2;

	dos(number1,number2);

	system("pause>nul");
	return 0;
}