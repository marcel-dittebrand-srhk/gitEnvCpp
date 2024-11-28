
#include <iostream>

int main() {
    
    using namespace std;

    int z1, z2; // Variablen zur Steuerung der Schleifen

    cout << "Wie oft soll die 1. Schleife ausgefuehrt werden: ";
    cin >> z1; // Eingabe für die äußere Schleife
    
    cout << "Wie oft soll die 2. Schleife ausgefuehrt werden: ";
    cin >> z2; // Eingabe für die innere Schleife
    
    // Äußere Schleife: Startet bei z1 - 1 und zählt rückwärts
    for(int x = z1 - 1; x >= 0; x--) {

        /*
            Diese Schleife erzeugt die Ausgabe pro Zeile.
            Erst werden Leerzeichen, dann # ausgegeben.
            Anzahl der Leerzeichen basiert auf der aktuellen Zeilennummer x.
        */ 
        for(int y = 0; y < z2; y++) {

            /*
                Ternärer Operator entscheidet, ob Leerzeichen oder #
                basierend auf der Position y und der aktuellen Zeilennummer x
            */
            cout << ((y < x) ? " " : "#"); // Gibt Leerzeichen oder # aus

        }

        cout << endl; // Zeilenumbruch nach Abschluss einer Zeile
        
    }

    return 0; // Beendet das Programm

}
