#include <iostream>
#include <string>

using namespace std;

void up1();
void up2(float, float);
string up3();
int up4(int, int, int);
int up4(int, int);
int up5(int);

int main(){

    float a = 17, b = 23, c = 19;
    char q = 'x';
    
    cout << "Hallo Unterprogramm" << endl;
    up1();
    up2(39, 3);
    cout << up3() << endl;
    cout << up4(6, 7) << endl;
    cout << up4(4, 5, 7) << endl;
    cout << up5(4) << endl;

}

void up1(){
    cout << "Hallo Welt" << endl;
}

// UP mit Übergabeparametern

void up2(float x, float y){
    cout << "Die Summe ist ";
    cout << (x + y);
    cout << endl;
}

// UP mit Rückgabeparameter

string up3() {
    return "Hallo Welt";
}

// Überladen von Funktionen

float up4(float x, float y) {
    return x * y;
}

int up4(int x, int y, int z) {
    return x * y * z;
}

int up4(int x, char c) {
    return c;
}

// UP mit rekursiver Funktion

int up5(int x) {

    if(x > 1) {

        return x * up5(x - 1);

    } else {

        return 1;

    }

}