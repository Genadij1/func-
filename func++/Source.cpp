#include <iostream>
#include<cstdlib>
using namespace std;

bool diffi(int num) {
	if (num <= 1) 
	return false;

	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

int main() {
	int num;
	cout << "Enter num: ";
	cin >> num;
	(num);
	if (diffi(num)) {
		cout << "number is prime!" << endl;
	}
	else {
		cout << "number is not prime!";
	}


	system("pause>nul");
	return 0;
}