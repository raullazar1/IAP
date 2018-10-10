
#include <iostream>

using namespace std;

int main()
{
    int valoare, cantitate, pret;
    cout << "Introduceti cantitatea : ";
    cin >> cantitate;

    cout << "Introduceti pretul produsului : ";
    cin >> pret;

    valoare = cantitate * pret;
    cout << "Valoarea produsului este :" << valoare << endl;
    return 0;
}
