#include <iostream>

int main (){

    using namespace std;

    int z1;
    int z2;

    cout << "z1: "; cin >> z1;
    cout << "z2: "; cin >> z2;

    // Äußere Schleife: Steuert die Zeilen
    for(int y = 0; y < z1; y++) {

        // Innere Schleife: Steuert die Spalten
        for(int x = 0; x < z2; x++) {

            // Alternative Schreibweise mit Ternären Operatoren
            // cout << ((y == 0 || (y == (z1 - 1))) ? ("#") :(
            //     ((x == 0 || (x == (z2 - 1))) ? ("#") :(
            //         " "
            //     ))
            // ));

            // Überprüfung der Positionen und Zeichenausgabe
            if(y == 0 || (y == (z1 - 1))) {

                cout << "#"; // Oberste oder unterste Zeile: Ausgabe eines #

            } else if (x == 0 || (x == (z2 - 1))) {

                cout << "#"; // Erste oder letzte Spalte: Ausgabe eines #

            } else {

                cout << " "; // Innenraum: Ausgabe eines Leerzeichens

            }

        }

        cout << endl; // Zeilenumbruch nach jeder Zeile
    }

    return 0;

}