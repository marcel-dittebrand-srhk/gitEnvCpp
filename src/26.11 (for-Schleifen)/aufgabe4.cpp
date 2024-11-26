#include <iostream>

int main() {
    
    using namespace std;

    int z1, z2; // Speichert, wie oft sollen die for-Schleife ausgeführt werden

    cout << "Wie oft soll die 1. Schleife ausgefuehrt werden: ";
    cin >> z1; // Bekommt den Wert,  Speichert, wie oft die 1. for-Schleife ausgeführt werden
    
    cout << "Wie oft soll die 2. Schleife ausgefuehrt werden: ";
    cin >> z2; // Bekommt den Wert,  Speichert, wie oft die 2. for-Schleife ausgeführt werden
    

    /*
        Gibt den oberen Rahmen aus O aus.
        z1 + 2, da der obere Rahmen, um 2 größer sein muss als der Inhalt,
        da der linke und rechte Rahmen 1 Buchstabe groß ist.
    */
    for(int x = 0; x < z1 + 2; x++) {

        cout << "O";

    }

    /*
        Geht nachdem der obere Rahmen aus O ausgeben worden ist,
        in die nächste Zeile.
    */
    
    cout << endl;

    for(int x = 0; x < z1; x++) {

        /*
            Gibt bevor die # in der jeweiligen Zeile ausgegeben
            worden sind. Ein O für den Rahmen an der linken Seite aus.
        */
        cout << "O";
        
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
            cout << ((y < (x)) ? " " : "#"); // Gibt das # aus

        }

        /*
            Gibt nachdem die # in der jeweiligen Zeile ausgegeben
            worden sind. Ein O für den Rahmen an der rechten Seite aus
        */
        if(x != (z1)) {

            cout << "O" << endl;

        }
        
    }

    /*
        Gibt den oberen Rahmen aus.
        z1 + 2, da der obere Rahmen, um 2 größer sein muss als der Inhalt,
        da der linke und rechte Rahmen 1 Buchstabe groß ist.
    */
    for(int x = 0; x < z1 + 2; x++) {

        cout << "O";

    }

    return 0;

}
        