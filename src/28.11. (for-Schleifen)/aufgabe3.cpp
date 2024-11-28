#include <iostream>

int main() {
    
    using namespace std;

    int z1, z2; // Variablen zur Steuerung der Schleifen

    cout << "Wie oft soll die 1. Schleife ausgefuehrt werden: ";
    cin >> z1; // Eingabe für die äußere Schleife
    
    cout << "Wie oft soll die 2. Schleife ausgefuehrt werden: ";
    cin >> z2; // Eingabe für die innere Schleife
    
    // Äußere Schleife: Steuerung der Zeilen
    for(int x = 0; x < z1; x++) {

        // Innere Schleife: Steuerung der Spalten
        for(int y = 0; y < z2; y++) {   

            // Überprüfung der Parität der Zeilen- und Spaltenindizes
            if(x % 2 == 0) { 
                // Gerade Zeilen: Abwechselnde Ausgabe von # und O
                cout << ((y % 2 == 0)?  "#" : "O");
            } else {
                // Ungerade Zeilen: Abwechselnde Ausgabe von O und #
                cout << ((y % 2 == 0)?  "O" : "#");
            }

        }

        cout << endl; // Zeilenumbruch nach jeder Zeile

    }

    return 0; // Programmende

}
