#include <iostream>

using namespace std;

int main()
{
    long sum;
    int a[20], nr, i;

    cout << "Numarul de elemente din sirul a (maximum 20) ";
    cin >> nr;

    for (i = 0; i < nr; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

   for ( i = 0, sum = 0; i <nr; i++ ) {
      sum = sum + a[i];
      cout << "Acuma suma este :" << sum << endl;
   }
   cout << "Suma elementelor sirului a este : " << sum << endl;

    return 0;
}
