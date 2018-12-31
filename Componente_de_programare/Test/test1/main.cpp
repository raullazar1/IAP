#include <iostream>
using namespace std;
double convers(int t); //R functia trebuie declarata

int main()  // mai trebuie sa returneze int nu void
{
    int t1, t2;
    int t; //R variabila trebuie declarata
    t1 = 0; t2 = 100; // Intervalul de temperaturi
    t = t1;
    while (t <= t2)
    {
        cout << t << "\t" << convers(t) << endl;
        t += 10;
    }
}
double convers(int t)
{
    //int t; nu trebuie declarat
    double v;
    v = 5.0 * (t - 32.0) / 9.0; // Transf. Celsius -> Fahrenheit
    return v;
}
