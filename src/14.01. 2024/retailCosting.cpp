#include <iostream>
#include <string>
#include <cmath>

double roundToDecimalPlaces(double value, int decimalPlaces) {

    const double multiplier = std::pow(10.0, decimalPlaces);
    return std::round(value * multiplier) / multiplier;
    
}

int main(){

    float bezugspreis;
    float handlungskosten;
    float selbstkostenpreis;
    float gewinn;
    float barverkaufspreis;
    float kundenskonto;
    float zielverkaufspreis;
    float kundenrabatt;
    float listenverkaufspreis;

    std::cin >> bezugspreis;

    handlungskosten = bezugspreis * 20 / (100 - 20);;
    selbstkostenpreis = bezugspreis * 15;

    gewinn = bezugspreis * 10 / (100 - 10);
    barverkaufspreis = gewinn + selbstkostenpreis;

    kundenskonto = barverkaufspreis * 2 / (100 - 2);
    zielverkaufspreis = kundenskonto + barverkaufspreis;

    kundenrabatt = zielverkaufspreis * 15 / (100 - 15);
    listenverkaufspreis = kundenrabatt + zielverkaufspreis;

    std::cout << "Einstandspreis: " << bezugspreis << "\n";
    std::cout << "Handlungskosten: " << handlungskosten << "\n";
    std::cout << "Selbstkostenpreis: " << selbstkostenpreis << "\n";
    std::cout << "Gewinn: " << gewinn << "\n";
    std::cout << "Barverkaufspreis: " << barverkaufspreis << "\n";
    std::cout << "Kundenskonto: " << kundenskonto << "\n";
    std::cout << "Zielverkaufspreis: " << zielverkaufspreis << "\n";
    std::cout << "Kundenrabatt: " << kundenrabatt << "\n";
    std::cout << "Listenverkaufspreis: " << listenverkaufspreis << "\n";

}

