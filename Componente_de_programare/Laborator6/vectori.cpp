#include <cmath>

struct vector {
   double x, y, z;
};

vector sumv(vector a, vector b)
{
   vector rez;
   rez.x = a.x + b.x;
   rez.y = a.y + b.y;
   rez.z = a.z+ b.z;
   return rez;
}

double prods(vector a, vector b)
{
   double rez;
   rez = a.x * b.x + a.y * b.y + a.z * b.z;
   return rez;
}

vector versor(vector a)
{
   vector rez;
   double modul;
   modul = sqrt(a.x*a.x + a.y*a.y+a.z*a.z);  //  necesita #include <cmath>
   if(modul < 1.0e-7)
      return a;
   rez.x = a.x / modul;
   rez.y = a.y / modul;
   rez.z = a.z / modul;
   return rez;
}
