#include <iostream>

int main() {

    using namespace std;

    int a, b;

    cout << "Aufgabe 2: Vergleichsoperatoren" << endl;

    cout << "Nummer a: "; cin >> a;
    cout << "Nummer b: "; cin >> b;

    if(a == b) {

        cout << "Die Nummer a und b sind gleich.";

    } else if (a < b) {

        cout << "Die Nummer b ist groesser als die Nummber a.";

    } else {

        cout << "Die Nummer a ist groesser als die Nummber b.";

    }

}