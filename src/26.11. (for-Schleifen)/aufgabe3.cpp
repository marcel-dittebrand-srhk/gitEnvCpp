/*
    Die Aufgabe 3 ist die spiegelverkehrte (Rechts-Links-Spiegelung)
    Version der Aufgabe 2.
*/

#include <iostream>

int main() {
    
    using namespace std;

    int z1, z2; // Speichert, wie oft sollen die for-Schleife ausgeführt werden

    cout << "Wie oft soll die 1. Schleife ausgefuehrt werden: ";
    cin >> z1; // Bekommt den Wert,  Speichert, wie oft die 1. for-Schleife ausgeführt werden
    
    cout << "Wie oft soll die 2. Schleife ausgefuehrt werden: ";
    cin >> z2; // Bekommt den Wert,  Speichert, wie oft die 2. for-Schleife ausgeführt werden
    
    for(int x = 0; x < z1; x++) {

        /*
            Diese for-Schleife gibt zuerst Leerzeichen in einer Zeile aus.
            Die Anzahl ist abhängig von der Zeilennummer.
            Die Anzahl der Leerzeichen entspricht der Zeilennummer + 1.
            Für die restlichen Ausführung des Schleifeninhalts bis y==z2 werden
            # ausgegeben. So ensteht eine Dreieck aus #, was auf der
            rechten Seiten seinen rechten Winkel hat.

        */ 
        for(int y = 0; y < z2; y++) {

            /*
                Tenärer-Operator wird benutzt um zu prüfen, ob ein
                Leerzeichen oder ein # ausgegeben werden soll.
            */
            cout << ((y < x) ? " " : "#"); // Gibt das # aus

        }

        cout << endl; // Geht in die nächste Zeile
        
    }

    return 0;

}
        