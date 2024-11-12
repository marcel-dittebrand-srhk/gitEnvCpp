#include <iostream>
#include <string>

int main() {

    
    using namespace std;

    string txt;

    double x = 1;   // Save the first number
    double y = 1;   // Save the second number
    double z;       // Save sum of x + y
    
    
    for(int i = 0; i < 100; i++) {

        cout << i << ": "<< x << " - " << "Goldener Schnitt: " << y/x << endl;
        
        // Calculate continuously the next numbers and replace the old numbers
        
        z = x + y;
        x = y;
        y = z;

    }

    cin >> txt;
    return 0;
}