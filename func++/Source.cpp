#include <iostream>
#include<cstdlib>
using namespace std;

void max_num(int num1,int num2) {
	if (num1 > num2) {
		cout << num1 << ">" <<num2;
	}
	else {
		cout << num2 << ">" << num1;
	}
}

int main() {
	int num1, num2;
	cout << "Enter num 1: ";
	cin >> num1;
	cout << "Enter num 2:";
	cin >> num2;
	max_num(num1,num2);

	system("pause>nul");
	return 0;
}