#include <iostream>
#include <conio.h>

int main() {

    using namespace std;

    char buchstabe;

    cout << "Aufgabe 7: getch()" << endl;

    cout << "Buchstaben: ";
    buchstabe = getch();

    cout << ", ASCII-Code: " << ((int) buchstabe);

    while(buchstabe != 'Q') {

        buchstabe = getch();

    }
}