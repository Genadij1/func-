#include <iostream>
#include<cstdlib>
using namespace std;

void factorial(int num) {
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact *= i;
	}
	cout << fact;
}
int main() {
	int num;
	cout << "Enter num: ";
	cin >> num;
	factorial(num);


	system("pause>nul");
	return 0;
}