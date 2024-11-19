#include <iostream>

int main() {

    using namespace std;

    // Konstante, die den Umrechnungsfaktor speichert.

    const double silberToGold = 0.72;

    cout << "Aufgabe 3: Umrechnungstabelle" << endl;

    // Schleife, die von 0 bis 100 in Schritten von 0.5 geht.
    for(double i = 0; i <= 100; i+=0.5) {

        // Gibt den Wert der Goldtaler und den entsprechenden Wert in Silbertalern aus.
        // Die Berechnung erfolgt durch Multiplizieren des Goldtaler-Werts mit dem Umrechnungsfaktor.
        cout    << "Goldtaler: " << (i)
                << "\t = Silbertaler: " << (i*silberToGold)
                << endl;
    }
    
}