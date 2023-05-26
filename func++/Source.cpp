#include <iostream>
#include<cstdlib>
using namespace std;

 void figure(int K, int N) {
	for (int i = 0; N > i;) {
		for (int i = 0; i < K; i++) {
			cout << "*" << " ";
		}
		cout << endl;
		i++;
	}
}

int main() {
	int N, K;
	cout << "Enter height: ";
	cin >> N;
	cout << "Enter weight: ";
	cin >> K;
	figure(K, N);


	system("pause>nul");
	return 0;
}