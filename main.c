#include <stdio.h>
#include <stdlib.h>

double calka(double xp, double xk, int n, double a, double b, int potega)
{
    double Sx;
    Sx=0.0;
    int i;
    i=0;

    for(i;i<n;i++)
    {
        Sx=Sx+1;
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

    printf("Podaj parametr a prostej y=ax+b: ");
    scanf("%lf", &a);
    printf("Podaj parametr b prostej y=ax+b: ");
    scanf("%lf", &b);
    printf("Podaj parametr c prostej y=c: ");
    scanf("%lf", &c);
    printf("Podaj mase stozka m: ");
    scanf("%lf", &m);

	printf("Podane parametry to: a = ");
    printf("%lf",a);
    printf(", b = ");
    printf("%lf",b);
    printf(", c = ");
    printf("%lf",c);
    printf(", m = ");
	printf("%lf",m);

    licznik=calka(0, c, n, a, b, 4);
    mianownik=calka(0, c, n, a, b, 2);
    moment=licznik*m/(mianownik*2);
	
	printf("\nMoment bezwladnosci stozka to: ");
    printf("%E", moment);
	scanf("%lf", &a);
    return 0;
}
