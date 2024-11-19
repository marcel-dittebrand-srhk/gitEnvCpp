#include <iostream>
#include <conio.h>

int main() {

    using namespace std;

    char buchstabe;

    cout << "Aufgabe 7: getch()" << endl;

    cout << "Buchstaben: ";
    buchstabe = getch();        // Liest ein einzelnes Zeichen direkt ein, ohne Enter zu drücken.
                                // und speichert es in der Variabele buchstabe vom Datentyp char.

    cout << ", ASCII-Code: " << ((int) buchstabe);  // Gibt den ASCII-Code des eingegebenen Zeichens aus.

    while(buchstabe != 'Q') {   // Wiederholt Eingabe, solange das eingegebene Zeichen nicht 'Q' ist.

        buchstabe = getch();    // Liest ein einzelnes Zeichen direkt ein, ohne Enter zu drücken.
                                // und speichert es in der Variabele buchstabe vom Datentyp char.

    }
}