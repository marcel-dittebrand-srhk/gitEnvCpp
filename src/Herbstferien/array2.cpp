#include <iostream>

int main() {

    using namespace std;

    
    int arrayLength;
    int z;
    int i = 0;
    bool aufsteigend;

    cout << "Laenge des Arrays: ";
    cin >> arrayLength;

    int array[arrayLength];

    
    cout << "Gebe 0 fuer absteigend ein." << endl;
    cout << "Gebe 1 fuer aufsteigend ein." << endl;
    cout << "[0, 1] ";
    cin >> aufsteigend;
    for(int i = 0; i < arrayLength; i++) {

        cout << "[" << i << "] ";
        cin >> array[i];

    }
    
    while(i < arrayLength - 1) {

        if(aufsteigend ? (array[i] < array[i+1]) : (array[i] > array[i+1])) {

            i++;

        } else {

            z = array[i+1];
            array[i+1] = array[i];
            array[i] = z;
            i=0;

        }
    }

    cout << endl;

    for(int i = 0; i < arrayLength; i++) {

        cout << "[" << i << "] ";
        cout << array[i] << endl;

    }
    return 0;
}