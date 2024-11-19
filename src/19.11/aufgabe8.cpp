#include <iostream>
#include <conio.h>

int main() {

    using namespace std;

    char buchstabe;     // Variable für die Eingabe eines einzelnen Zeichens.
    int i = 0;          // Zähler, um die Anzahl der eingegebenen Zeichen zu speichern.

    cout << "Aufgabe 8: Eingebene Zeichen" << endl;

    cout << "Buchstabe: ";              
    buchstabe = getch();                // Liest ein einzelnes Zeichen direkt ein, ohne Enter zu drücken.
                                        // und speichert es in der Variabele buchstabe vom Datentyp char.
    i++;                                // Zähler wird erhöht (Zählt das gerade eingebene Zeichen)

    cout << ", ASCII-Code: " << ((int) buchstabe); // Gibt den ASCII-Code des eingegebenen Zeichens aus.

    // Wiederholt Eingabe, solange das eingegebene Zeichen nicht 'Q' ist.
    while(buchstabe != 'Q') {

        buchstabe = getch();    // Liest ein einzelnes Zeichen direkt ein, ohne Enter zu drücken
                                // und speichert es in der Variabele buchstabe vom Datentyp char.
        i++;                    // Zähler wird erhöht (Zählt das gerade eingebene Zeichen)

    }

    cout << ", Eingebene Zeichen: " << i;  // Gibt die Anzahl der eingegebenen Zeichen aus.
}