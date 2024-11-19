#include <iostream>

int main() {

    using namespace std;

    const double silberToGold = 0.72;

    cout << "Aufgabe 3: Umrechnungstabelle" << endl;

    for(double i = 0; i <= 100; i+=0.5) {

        cout    << "Goldtaler: " << (i)
                << "\t = Silbertaler: " << (i*silberToGold)
                << endl;
    }
    
}