
#include <iostream>

int main() {

    using namespace std;

    int n, sum = 0; // Deklariert zwei Variablen:
                    // n speichert die vom Benutzer eingegebene Zahl.
                    // sum speichert die berechnete Summe, beginnt bei 0.


    cout << "Aufabe 5: Summe von 0 bis n berechnen";
    cout << "n = "; cin >> n;
    
    // Eine Schleife, die läuft, bis "n" kleiner oder gleich 0 wird.
    do {

        sum += n;   // Addiert den aktuellen Wert von n zur Summe.
        n-=1;       // Reduziert n um 1.

    } while(n > 0); // Die Schleife wiederholt sich, solange "n" größer als 0 ist.

    // Gibt die berechnete Summe aus.
    cout << sum << endl;
    
}