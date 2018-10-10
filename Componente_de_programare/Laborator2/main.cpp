#include <iostream>

using namespace std;

int main()

//1: Realizați o aplicație care permite exprimarea în km a unei lungimi intoduse de la tastatură în mile. Se știe că o milă terestră = 1.609344km.
//{
//    double mile, km;
//    cout << "Lungimea in mile: ";
//    cin >> mile;
//    km = mile * 1.609344;
//    cout << "Lungimea in Km este de " << km << endl;
//    return 0;
//}

//2: Pe modelul exercițiului precedent, modificați aplicația realizată astfel încât să realizeze exprimarea în grade Celsius a unei temperaturi date în grade Fahrenheit. Relația de calcul este următoarea:
//{
//    double cel, fahr;
//    cout << "Temperatura in grade Fahrenheit: ";
//    cin >> fahr;
//    cel = (fahr - 32) * 5./9;
//    cout << "Temperatura in grade Celsius este de " << cel << endl;
//    return 0;
//}

//3: Scrieți o aplicație care calculează greutatea ideală a unei persoane. Relația de calcul este următoarea:

{
    int v, h;
    double g;
    cout << "Inaltimea (cm): ";
    cin >> h;
    cout << "Varsta (ani): ";
    cin >> v;
    g = 50 + 0.75*(h - 150) + 0.25 * (v - 20);
    cout << "Greutatea ideala (barbat): " << g << "kg" << endl;
    cout << "Greutatea ideala (femeie): " << 0.9 * g << "kg" << endl;
    return 0;
}
