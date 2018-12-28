long factorial(int n);
double suma(int n, double a[]);


int main()
{
   long f;
   double s;
   double a[5] = {10., 33.,-12., 1., 10.};
   f = factorial(6);
   s = suma(5,a);
   return 0;
}

long factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n *factorial(n-1);
}

double suma(int n, double a[])
{
    if (n == 1)
        return a[0];
    else
        return a[n-1] = suma(n-1, a);
}
