// Arrays

#include<iostream>
#include<string>

using namespace std;

int main() {

    // NULL-Terminierung
    /* 
        Da selten ein Array vollständig ausgefüllt ist, muss der Kompiler
        wissen, wo der definierte Bereich aufhört und der Datenmüll (garbage) anfängt.

        Dies kennzeichnet die Null-Terminierung. Sie wird über cin automatisch mit der
        der Enter-Tase gesetzt.

        Hat man das Wiessen, kann man dies auch coden -> '\0'
    */

    // Wird das Array gleich initialisiert braucht man keine Größe eintragen.
    char vokale[] = {'a', 'e', 'i', 'o', 'u','\n', 'A','E', 'I', 'O', 'U', '\0'};
    char name[20];
    int prime[] = {1, 3, 5, 7, 13, 17, 23, 29};
    
    // Technisch gesehen sind Strings Char Arrays und somit keine Basis-Datentyp
    // -> deswegen müssen wir sie bei C++ bei bedarf erst einbinden.
    string test = "BlaBlaBla";
    test.clear();   /* 
                        Vorteil für String: Viele Funktionen / Methoden in
                        der Bibliothek hinterlegt.
                    */
    cout << test << "X" << endl;

    char doppeln[10];

    /*
        
        Abhilfe cin.getline
        Beachte ein Standard cin wertet die Space-Taste als 0-Terminierung.
        Beachte cin und cin.getline verstehen sich nicht immer gut, Reihenfolge beachten!
    */ 
    cout << "Doppelname: "; cin.getline(doppeln, 19);
    cout << "Name: "; cin >> doppeln;

    cout << vokale[2] << endl;
    cout << name[2] << endl;

    cout << "Hallo " << name << endl;
    cout << "Doppeln= " << doppeln << endl;
    cout << "Vokale= " << vokale << endl;
    cout << "Primzahlen= " << prime << endl;

    /*
        Int-Array lässt sich nicht O'Block ausgegeben, da nicht klar ist,
        wi hört die eine Zahl auf, wo fängt die nächste an. Um einen
        Fehler zu vermeiden, wird die erste Speicherstelle des Arrays
        ausgegeben.
        ->  Mit Pointer-Arithmetik könnte man das weiter verarbeiten
            Geduld kommt noch :-)
    */ 

    system("pause");
    return 0;
}