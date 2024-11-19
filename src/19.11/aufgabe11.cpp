#include <iostream>
#include <conio.h>

int main() {

    using namespace std;

    int zahl;

    cin >> zahl;

    for(int i = 1; i <= zahl; i++) {

        if(i == zahl) {

            cout << "Die eigebene Zahl " << zahl << " ist eine Primzahl."<< endl;
            break;
            
        }

        if(zahl % i == 0 && i != 1) {

            cout << "Die eigebene Zahl " << zahl << " ist keine Primzahl."<< endl;
            break;

        }

    }
    
}