#include <iostream>

int main() {

    using namespace std;

    int zahl;

    cin >> zahl;

    // Eine Schleife, die von 1 bis zur eingegebenen Zahl läuft.
    for(int i = 1; i <= zahl; i++) {

        // Prüft, ob die aktuelle Zahl i ein Teiler der eingegebenen Zahl ist.
        if(zahl % i == 0) {

            // Gibt den Teiler i aus
            cout << i << endl;

        }

    }

}