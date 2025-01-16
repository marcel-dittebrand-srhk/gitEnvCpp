
#include<iostream>

using namespace std;

float sum(float x, float y) {

    return x + y;

}

float subtract(float x, float y) {

    return x - y;

}

float multiply(float x, float y) {

    return x * y;

}

float divide(float x, float y) {

    return x / y;

}


int main(){

    float z1, z2, erg;
    char ro;

    cout << "Rechnung <+-*/_> ";
    cin >> ro;
    
    cout << "Z2: "; cin >> z1;
    cout << "Z3: "; cin >> z2;

    switch(ro) {

        case '+': cout << sum(z1, z2); break;
        case '-': cout << subtract(z1, z2); break;
        case '*': cout << multiply(z1, z2); break;
        case '/': cout << divide(z1, z2); break;
        case '_':
        
        int a1 = (int) z1;
        int a2 = (int) z2;

        int divisor = a1 > a2 ? a1 : a2;
        
        while(!((a1 % divisor == 0) && (a2 % divisor == 0))) {
            divisor -= 1;
        }
        a1 = a1 / divisor;
        a2 = a2 / divisor;
        cout << (a1) << "/" << (a2);
    }

}