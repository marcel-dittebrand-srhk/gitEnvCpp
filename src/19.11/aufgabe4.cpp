#include <iostream>

int main() {

    using namespace std;

    double i = 0; // Zählvariable

    cout << "Aufgabe 4: Umrechnungstabelle für Fahrenheit in Celcius";

    while(i <= 300) {

        cout    << "Fahrenheit: " << i
                << "\t = Celsius: " << ((i - 32)*((( (double) 5 )/( (double) 9 )))) << endl;
        i += 20;
    }
}