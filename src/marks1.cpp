#include <iostream>

int main() {

    using namespace std;

    int markAsNumber;

    cout << "Geben Sie eine Note als Zahl ein: ";
    cin >> markAsNumber;
    
    switch (markAsNumber) {

        case 1:

            cout << "Sehr gut" << endl;
            break;

        case 2:

            cout << "Gut" << endl;
            break;

        case 3:

            cout << "Befriedigend" << endl;
            break;

        case 4:

            cout << "Ausreichend" << endl;
            break;

        case 5:

            cout << "Mangelhaft" << endl;
            break;

        case 6:

            cout << "Ungenügend" << endl;
            break;

        default:

            cout << "Ungültige Eingabe" << endl;
            break;

    }
    
    return 0;

}