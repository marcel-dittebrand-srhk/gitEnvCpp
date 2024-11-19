#include <iostream>

int main() {

    using namespace std;

    int zahl1, zahl2;
    int x = 1, y = 0;   // x und y sind Variablen, die aktuellen Teiler für zahl1 und zahl2
                        // y ist der Teiler für zahl1, y ist der Teiler für zahl2

    cin >> zahl1;
    cin >> zahl2;

    // Äußere Schleife, um mögliche Teiler von zahl1 in absteigender Reihenfolge zu prüfen.
    for(x = zahl1; x > 0; x--) {

        // Prüft, ob x ein Teiler von zahl1 ist.
        if(zahl1 % x == 0) {

             // Innere Schleife, um mögliche Teiler von zahl2 in absteigender Reihenfolge zu prüfen.
            for(y = zahl2; y > 0; y--) {
                
                // Prüft, ob y ein Teiler von zahl2 ist UND ob y gleich x ist.
                if(zahl2 % y == 0 && y == x) {

                    cout << "ggT: " << y;   // Ausgabe des größten gemeinsamen Teilers (ggT).
                    exit(0);                // Sofortiger Programmabbruch, nachdem der ggT gefunden wurde.
                                            // Theoretisch auch anders lösbar.

                }
                
            }

        }
            
    }

}