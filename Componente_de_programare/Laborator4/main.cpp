#include <iostream>

using namespace std;

int main()
// exercitiu 1
//{
//    long sum;
//    int a[20], nr, i;
//
//    cout << "Numarul de elemente din sirul a (maximum 20) ";
//    cin >> nr;
//
//    for (i = 0; i < nr; i++) {
//        cout << "a[" << i << "] = ";
//        cin >> a[i];
//    }
//
//   for ( i = 0, sum = 0; i <nr; i++ ) {
//      sum = sum + a[i];
//      cout << "Acuma suma este :" << sum << endl;
//   }
//   cout << "Suma elementelor sirului a este : " << sum << endl;
//
//    return 0;
//}


//exercitiu 2

//{
//    long sum, max;
//    int a[20], nr, i;
//
//    cout << "Numarul de elemente din sirul a (maximum 20) ";
//    cin >> nr;
//
//    for (i = 0; i < nr; i++) {
//        cout << "a[" << i << "] = ";
//        cin >> a[i];
//    }
//    max = a[0];
//    for (i=1; i < nr; i++) {
//        if (max < a[i]) {
//         max = a[i];
//        }
//    }
//
//    cout << "Numarul maxim este: " << max<<endl;
//
//    return 0;
//}

//exercitiul 3

//{
//    int a[20], nr, i, j, aux;
//
//    cout << "Numarul de elemente din sirul a (maximum 20) ";
//    cin >> nr;
//
//    for (i = 0; i < nr; i++) {
//        cout << "a[" << i << "] = ";
//        cin >> a[i];
//    }
//
//    for (i=0, j=nr-1; i<j; i++, j-- ){
//        aux = a[i];
//        a[i] = a[j];
//        a[j] = aux;
//    }
//
//    cout << " Sirul este: ";
//
//    for (j=0; j<nr; j++){
//        cout<< a[j]<<" ";
//    }
//    cout <<endl;
//
//return 0;
//
//}

//exercitiul 4
//
//{
//        int a[20], nr, i, j, aux;
//
//    cout << "Numarul de elemente din sirul a (maximum 20) ";
//    cin >> nr;
//
//    for (i = 0; i < nr; i++) {
//        cout << "a[" << i << "] = ";
//        cin >> a[i];
//    }
//
//    aux = a[0];
//    for (i=0; i<nr; i++) {
//        a[i] = a[i+1];
//    }
//    a[nr-1] = aux;
//
//    cout <<"sirul final este :";
//     for (i=0; i<nr; i++) {
//        cout<< a[i]<<" ";
//    }
//    cout <<endl;
//}

//ex 5

{
    int a[20], nr, i, j, aux;

    cout << "Numarul de elemente din sirul a (maximum 20) ";
    cin >> nr;

    for (i = 0; i < nr; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for (i = 0; i < nr; i++) {
        if (a[i] > a[i+1]) {
            aux = a[i];
            a[i] = a[i+1];
            a[i+1] = aux;
        }
    }

    cout <<"sirul final este :";
     for (i=0; i<nr; i++) {
        cout<< a[i]<<" ";
    }
    cout <<endl;


}
