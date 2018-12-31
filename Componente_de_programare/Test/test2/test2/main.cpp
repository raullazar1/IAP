#include <iostream>
using namespace std;

int adev(int v, int a[]); //definirea

int main() //main nu poate fi void
{
    int a[12]={1,5,3,9,13,17,-3,6,99, 10, 18, 22};
    int v; // i nu mai trebuie
    int adevar;
    v = 5; // v trebuie initializat
    // Se verifica daca v este in sirul a
//    for (i=0; i<12; i++)
//    if(v == a[i])
//    adevar = 1;
//    cout << endl;

    adevar = adev(v,a); //R
    if(adevar)
    cout << "valoarea v este prezenta in sirul a";
    else
    cout << "valoarea v nu este prezenta in sirul a";
    cout << endl;
}
int adev(int v, int a[])
{
    int i;
    int adevar;
    for (i=0; i<12; i++)
    if(v == a[i])
    adevar = 1;
    return adevar;
}

