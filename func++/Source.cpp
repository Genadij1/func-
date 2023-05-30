#include <iostream>
#include <string>
using namespace std;


void displayCard(string card) {
    cout << "card: " << card <<endl;
}

int main() {
    string card = "Jack of Crosses";
    displayCard(card);

    return 0;
}
