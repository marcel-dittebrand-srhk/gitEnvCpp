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
            Diese for-Schleife gibt # in einer Zeile aus. Die Anzahl ist
            abhängig von der Zeilennummer. Die Anzahl der # entspricht der
            Zeilennummer + 1. So ensteht eine Dreieck aus #, was auf der
            linken Seiten seinen rechten Winkel hat.
        */ 
        for(int y = 0; y < (x + 1); y++) {

            cout << "#"; // Gibt das # aus

        }

        cout << endl; // Geht in die nächste Zeile
        
    }

    return 0;

}
        