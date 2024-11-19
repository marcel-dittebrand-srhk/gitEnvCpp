#include <iostream>

int main() {

    using namespace std;

    int array1[5];
    int array1Length = (sizeof(array1) / sizeof(array1[0]));

    int array2[5];
    int array2Length = (sizeof(array2) / sizeof(array2[0]));

    int array3[5];
    int array3Length = (sizeof(array3) / sizeof(array3[0]));

    cout << "Array 1" << endl;
    for(int i = 0; i < array1Length; i++) {

        cout << "[" << i << "] ";
        cin >> array1[i];

    }

    cout << "\nArray 2" << endl;
    for(int i = 0; i < array2Length; i++) {

        cout << "[" << i << "] ";
        cin >> array2[i];

    }

    for(int i = 0; i < array3Length; i++) {

        array3[i] = array1[i] + array2[i];

    }

    cout << "\nArray 3 (Summe aus den Elementen von Array 1 und Array 2)" << endl;
    for(int i = 0; i < array3Length; i++) {

        cout << "[" << i << "] " << array3[i] << endl;

    }

    
}