#include<iostream>
using namespace std;

void function_1(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum +=i;
    }
    cout << sum;
}

int main() {
        int a, b;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        function_1(a, b);

        return 0;
    }