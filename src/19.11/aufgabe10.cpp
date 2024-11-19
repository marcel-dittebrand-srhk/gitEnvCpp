#include <iostream>
#include <conio.h>

int main() {

    using namespace std;

    int zahl1, zahl2;
    int x = 1, y = 0;

    cin >> zahl1;
    cin >> zahl2;

    for(x = zahl1; x > 0; x--) {

        if(zahl1 % x == 0) {

            for(y = zahl2; y > 0; y--) {

                if(zahl2 % y == 0 && y == x) {

                    cout << "ggT: " << y;
                    exit(0);

                }

            
                
            }
        }
            
    }
    
}