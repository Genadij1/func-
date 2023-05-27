#include <iostream>
#include <cstdlib>
using namespace std;

void dos(int number) {
	int i, sum = 0;
	for (i = 1; i < number; i++)
		if (number % i == 0) {
			sum += i;
		}
	cout << sum;
}

int main() {

	int number;
	cout << "Enter the number: ";
	cin >> number;

	dos(number);

	system("pause>nul");
	return 0;
}