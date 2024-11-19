#include <iostream>
#include <conio.h>

int main() {

    using namespace std;

    char buchstabe;
    int i = 0;

    cout << "Aufgabe 8: Eingebene Zeichen" << endl;

    cout << "Buchstabe: ";
    buchstabe = getch();
    i++;

    cout << ", ASCII-Code: " << ((int) buchstabe);

    while(buchstabe != 'Q') {

        buchstabe = getch();
        i++;

    }

    cout << ", Eingebene Zeichen: " << i;
}