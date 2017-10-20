#include <stdio.h>
#include <stdlib.h>
double calka(double xp, double xk, int n)
{
    double Sx;
    Sx=0.0;
    int i;
    i=0;

    for(i;i<n;i++)
    {
        Sx=Sx+
    }
    Sx=Sx*1;
    return Sx;
}

int main()
{
    double a,b,c,m;  //deklaracja danych wejsciowych
    a=b=c=m=0.0;
    int n; n=1000;  //liczba prostokatow
    double moment,licznik,mianownik;
    moment=licznik=mianownik=0.0;

    printf("Podaj parametr a prostej y=ax+b:\n");
    scanf("%lf", &a);
    printf("Podaj parametr b prostej y=ax+b:\n");
    scanf("%lf", &b);
    printf("Podaj parametr c prostej y=c:\n");
    scanf("%lf", &c);
    printf("Podaj parametr m");
    scanf("%lf", &m);

    printf("%lf",a);
    printf("\n");
    printf("%lf",b);
    printf("\n");
    printf("%lf",c);
    printf("\n");

    licznik=calka(0.0, c, n);
    mianownik=calka(0.0, c, n);
    moment=
    printf("%lf", wynik);
    return 0;
}
