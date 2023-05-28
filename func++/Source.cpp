#include <iostream>
using namespace std;

void dos(int number1, int number2) {
    for (int i = number1; i <= number2; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            cout << i << " ";
        }
    }
}

int main() {
    int number1, number2;
    cout << "Enter num 1: ";
    cin >> number1;
    cout << "Enter num 2: ";
    cin >> number2;

    dos(number1, number2);

    return 0;
}
