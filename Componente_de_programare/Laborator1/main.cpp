#include <iostream>

using namespace std;

int main()

//1 Dacă vârsta unei persoane citită de la tastatură corespunde unei persoane majore

//{
//    int v;
//    cout << "Indroduceti varsta : ";
//    cin >> v ;
//
//    if (v >= 18)
//        cout <<"Major"<<endl;
//    else
//        cout << "Minor" << endl;
//    return 0;
//}


//2. Dacă două valori citite de la tastatură sunt în ordine crescătoare;

//{
//    int v1, v2;
//    cout << "Introduceti v1 : ";
//    cin >> v1;
//    cout << "Introduceti v2 : ";
//    cin >> v2;
//    if (v1 < v2)
//        cout <<"Ordine crescatoare"<<endl;
//    else
//        cout << "Ordine descrescatoare" << endl;
//    return 0;
//}


//3. Valoarea unui lot de marfă dacă se introduce prețul unitar și cantitatea.

{
   float p; int c;
   cout << "Introduceti pretul : ";
   cin >> p;
   cout << "Introduceti cantitatea : ";
   cin >> c;
   double val = p * c;
   cout << "Valoarea este " << val << endl;
   return 0;
}
