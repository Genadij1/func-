#include <iostream>
#include<cstdlib>
using namespace std;

void cube(int num) {
	int nums;
	nums = num * num * num;
	cout << "cube number " << num << " = " << nums;
}

int main() {
	int num;
	cout << "Enter num: ";
	cin >> num;
	cube(num);

	system("pause>nul");
	return 0;
}