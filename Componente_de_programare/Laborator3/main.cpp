#include <iostream>

using namespace std;

int main()

//1: Realizați o aplicație care realizează numărătoarea inversă care precede lansarea unei rachete.
//   {
//      for (int i = 10; i > 0; i--) {
//        cout << i << endl;
//        Sleep(1000);
//      }
//      cout << "Racheta lansata." << endl;
//      return 0;
//   }

//   2: Creaţi un program care iniţializează cu 0 valorile elementelor unui şir a declarat astfel:

//{
//    int a[20], i;
//
//    for (i = 0; i < 20; i++) {
//      a[i] = i + 1;
//   }
//
//   for (i = 0; i < 20; i++) {
//      cout << a[i] << " ";
//   }
//   cout << endl;
//   return 0;
//}

//SAU

//{
//    int a[20], i;
//
//    for (i = 0; i < 20; i++) {
//
//      a[i] = i + 1;
//      cout << a[i] << " ";
//   }
//
//   return 0;
//}

//3: Creaţi un program care citeşte valorile unui şir de valori întregi a şi apoi schimbă semnul elementelor negative, respectiv dacă a[i] < 0 atunci a[i] = -a[i].


{
    int a[20], nr, i;
    cout << "Numarul de elemente din sirul a (maximum 20) ";
    cin >> nr;
    for (i = 0; i < nr; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (i = 0; i < nr; i++) {
        if(a[i] < 0)
            a[i] = -a[i];
    }
    for (i = 0; i < nr; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;
    return 0;
}

