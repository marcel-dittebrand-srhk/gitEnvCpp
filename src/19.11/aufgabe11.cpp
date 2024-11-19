#include <iostream>

int main() {

    using namespace std;

    int zahl;

    cin >> zahl;

    // Schleife, um alle Zahlen von 1 bis zur eingegebenen Zahl zu überprüfen.
    for(int i = 1; i <= zahl; i++) {

        // Wenn die Schleife bis zur eingegebenen Zahl kommt, ohne dass ein Teiler gefunden wurde.
        if(i == zahl) {

            cout << "Die eigebene Zahl " << zahl << " ist eine Primzahl."<< endl;
            break;

        }

        // Prüft, ob die Zahl durch i teilbar ist (außer durch 1).
        if(zahl % i == 0 && i != 1) {

            cout << "Die eigebene Zahl " << zahl << " ist keine Primzahl."<< endl;
            break;

        }

    }
    
}