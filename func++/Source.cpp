#include<iostream>
using namespace std;

void function_1(int a, int b)
{
    int s = 1;
    for (int i = 1; i <= b; i++)
    {
        s *=a;
    }
    cout << s;
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