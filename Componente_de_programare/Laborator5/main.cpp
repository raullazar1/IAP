#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;



//ex 1
//int main()

//{
//    char rasp, varianta;
//    double x;
//    rasp = 'd';
//    while (tolower(rasp) == 'd')
//    {
//        cout << "Unghiul: "; cin >> x;
//        cout << "Ce doriti sa calculati : (s - sin, c - cos, t - tan) : ";
//        cin >> varianta;
//        switch (varianta) {
//        case 's' :
//            cout << "sin = " << sin(3.14159 * x / 180.) << endl;
//            break;
//        case 'c' :
//            cout << "cos = " << cos(3.14159 * x / 180.) << endl;
//            break;
//        case 't' :
//            cout << "tan = " << sin(3.14159 * x / 180.)/
//                                cos(3.14159 * x / 180.) << endl;
//            break;
//        default:
//            cout << "Caracter incorect!";
//        }
//        cout << "Mai continuati? (d/n) : ";
//        cin >> rasp;
//    }
//    return 0;
//}

//exercitiu 2


//  Prototipuri
//void schimba(int [], int);
//int minim(int [], int);
//
//int main(){
//    int a[] = {12, -14, 7, 23, 5, -71, 4};
//    schimba(a, 7);   //  In sir sunt 7 elemente
//    int mini = minim(a, 7);
//    cout << "Minimul valorilor dupa schimbarea semnelor este: " << mini << endl;
//    return 0;
//}
//
//void schimba(int a[], int n) {
//   int i;
//   for (i = 0; i < n; i++) {
//      if(a[i] < 0)
//         a[i] = -a[i];
//   }
//}
//
//int minim(int a[], int n) {
//   int i;
//   int m = a[0];
//   for (i = 1; i < n; i++) {
//      if(a[i] < m)
//         m = a[i];
//   }
//   return m;
//}


//exercitiul 4

//void initial(double [], int);  //  Prototipul functiei apelate
//
//int main()
//{
//   double a[100];
//   int nr, i;
//   cout << "Numarul de elemente (mai mic sau egal cu 100): ";
//   cin >> nr;
//   initial(a, nr);
//
//   for (i = 0; i < nr; i++) {
//        cout << a[i] << ", ";
//    }
//    cout << endl;
//    return 0;
//}
//
//void initial(double a[], int n)
//{
////   int i;
//   for ( int i = 0; i < n; i++) {
//      a[i] = i + 1;
//   }
//}
