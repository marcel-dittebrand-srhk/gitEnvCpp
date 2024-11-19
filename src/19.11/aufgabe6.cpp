#include <iostream>

int main() {

    using namespace std;

    int n = 0, sum = 0; // Deklariert zwei Variablen:
                        // n ist ein Zähler, der bei 0 startet.
                        // sum speichert die Summe, ebenfalls beginnend bei 0.
    
    cout << "Aufgabe 6: Endlosschleife" << endl;

    // Eine Endlosschleife, die nie endet
    while(true) {

        // Gibt den aktuellen Zählerwert "n" und die laufende Summe "sum" aus.
        cout << "[" << n << "] " << sum << endl;

        sum += n;       // Addiert den aktuellen Wert von "n" zur Summe.
        n++;            // Erhöht den Zähler "n" um 1.
        
    }

    
}