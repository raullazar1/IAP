#include <iostream>

using namespace std;

struct vector {
   double x, y, z;
};

int suma(int a[], int n);
void modul (int a[], int n);
void permcirc(int s[], int n);
vector sumv(vector a, vector b);
double prods(vector a, vector b);
vector versor(vector a);

int main()
{
    int v[] = {2, 5, -19, 34, 7, -12};
    vector v1,v2;
    v1.x = -12; v1.y = 7; v1.z = -1;
    v2.x = -1; v2.y = 5; v2.z =0;

    int sm = suma(v, 6);
    vector sv = sumv(v1, v2);
    return 0;
}
