#include <iostream>

int main() {

    using namespace std;

    cout << "Programm zum finden von Primzahlen\n\n";

    int max;

    cout << "Obergrenze fuer die Suche nach Primzahlen: ";
    cin >> max;

    int numbers[max];
    bool isPrime[max];

    for(int i = 0; i < max; i++) {
        numbers[i] = i + 1; 
    }

    for(int i = 0; i < max; i++) {
        isPrime[i] = true;
    }

    for(int x = 0; x < max; x++) {

        cout << x << endl;

        for(int y = numbers[x]; y > 0; y--) {

            cout << y << " : ";
            cout << numbers[x] << endl;

            if(!(numbers[x] == y || y == 1 || ((numbers[x]) % y) == 0)) {

                isPrime[x] = false;
                break;

            }
        }

    }
    cout << endl;
    for(int i = 0; i < max; i++) {
        cout << numbers[i] << "\t" << ((isPrime[i])) << endl;
    }

}