#include <iostream>

int main() {

    using namespace std;

    double i = 0; // Zählvariable

    cout << "Aufgabe 4: Umrechnungstabelle für Fahrenheit in Celcius";

     // Schleife, die alle 20 Grad Fahrenheit von 0 bis 300 durchgeht.
    while(i <= 300) {

        // Gibt die Umrechnung von Fahrenheit zu Celsius aus:
        cout    << "Fahrenheit: " << i
                << "\t = Celsius: " << ((i - 32)*((( (double) 5 )/( (double) 9 )))) << endl;
        
        // Erhöht die Temperatur um 20 Grad Fahrenheit.
        i += 20;
    }
}