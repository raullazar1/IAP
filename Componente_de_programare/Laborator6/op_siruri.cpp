int suma(int a[], int n)
{
    int i, s;
    for (i=0, s=0; i<n; i++)
    s += a [i];
    return s;
}


void permcirc(int s[], int n)
{
   int i, aux;
   aux = s[0];
   for(i=0; i<n-1; i++)
      s[i] = s[i+1];
   s[n-1] = aux;
}

void modul (int a[], int n)
{
    int i;
    for(i=0; i<n-1; i++)
        if (a[i] < 0)
            a[i] = -a[i];
}
