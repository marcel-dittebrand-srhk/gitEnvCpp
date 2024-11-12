#include <iostream>

int main() {

    using namespace std;

    double markAsNumber;
    cout << "Diese Programm beruecksichtigt auch Kommazahlen ";
    cout << "Geben Sie eine Note als Zahl ein: ";
    cin >> markAsNumber;
    
    if (markAsNumber >= 1.0 && markAsNumber < 1.5) {

        cout << "Sehr gut" << endl;

    } else if (markAsNumber >= 1.5 && markAsNumber < 2.5) {

        cout << "Gut" << endl;

    } else if (markAsNumber >= 2.5 && markAsNumber < 3.5) {

        cout << "Befriedigend" << endl;

    } else if (markAsNumber >= 3.5 && markAsNumber < 4.5) {

        cout << "Ausreichend" << endl;

    } else if (markAsNumber >= 4.5 && markAsNumber < 5.5) {

        cout << "Mangelhaft" << endl;

    } else if (markAsNumber >= 5.5 && markAsNumber <= 6.0){

        cout << "Ungenügend" << endl;

    } else {

        cout << "Ungültige Eingabe" << endl;

    }

    return 0;

}