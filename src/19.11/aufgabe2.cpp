#include <iostream>

int main() {

    using namespace std;

    int a, b;

    cout << "Aufgabe 2: Vergleichsoperatoren" << endl;

    // Fragt den Benutzer nach den Werten für a und b.
    cout << "Nummer a: "; cin >> a;
    cout << "Nummer b: "; cin >> b;

    
    if(a == b) {            // Überprüft, ob a gleich b ist.

         // Gibt aus, wenn a und b gleich sind.
        cout << "Die Nummer a und b sind gleich.";

    } else if (a < b) {     // Überprüft, ob a kleiner als b ist.

         // Gibt aus, wenn b größer als a ist.
        cout << "Die Nummer b ist groesser als die Nummber a.";

    } else {                // Wenn keine der obigen Bedingungen zutrifft,
                            // muss a größer als b sein.


        // Gibt aus, wenn a größer als b ist.
        cout << "Die Nummer a ist groesser als die Nummber b.";

    }

}