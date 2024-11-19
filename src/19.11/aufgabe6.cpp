#include <iostream>

int main() {

    using namespace std;

    int n = 0, sum = 0;
    
    cout << "Aufgabe 6: Endlosschleife" << endl;

    while(true) {

        cout << "[" << n << "] " << sum << endl;
        sum += n;
        n++;
        
    }

    
}