
#include <iostream>

int main() {

    using namespace std;

    int n, sum = 0;

    cout << "Aufabe 5: Summe von 0 bis n berechnen";
    cout << "n = "; cin >> n;
    
    
    do {

        sum += n;
        n-=1;

    } while(n > 0);

    cout << sum << endl;
    
}