#include <iostream>

int main() {
    
    using namespace std;

    int z1, z2; // Speichert, wie oft sollen die for-Schleife ausgeführt werden

    cout << "Wie oft soll die 1. Schleife ausgefuehrt werden: ";
    cin >> z1; // Bekommt den Wert,  Speichert, wie oft die 1. for-Schleife ausgeführt werden
    
    cout << "Wie oft soll die 2. Schleife ausgefuehrt werden: ";
    cin >> z2; // Bekommt den Wert,  Speichert, wie oft die 2. for-Schleife ausgeführt werden
    
    // Block
    for(int x = 0; x < z1; x++) {

        for(int y = 0; y < z2; y++) {   

            cout << "#";

        }

        cout << endl;

    }

    return 0;

}
        