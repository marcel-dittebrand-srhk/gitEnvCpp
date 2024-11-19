#include <iostream>
#include <conio.h>

int main() {

    using namespace std;

    int zahl;

    cin >> zahl;

    for(int i = 1; i <= zahl; i++) {
        if(zahl % i == 0) {
            cout << i << endl;
        }
    }

}