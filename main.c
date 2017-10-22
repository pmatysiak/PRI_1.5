#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//program oblicza wartosc momentu bezwladnosci stozka powstalego poprzez
//obrot prostej y = ax + b ograniczonej prosta y = c wokol osi x.


//funkcja calka wykorzystuje metode numerycznego calkowania metoda prostokatow

double calka(double xp, double xk, int n, double a, double b, double potega)
{
    double Sx;
    Sx=0.0;
    int i=1;

    for(i;i<=n;i++)
    {
        Sx+=pow(((a*(xp+(i*(xk-xp)/n)))+b), potega);
    }
    Sx*=(a*((xk-xp)/n));
	Sx+=b;
    return Sx;
}

int main()
{
	
	//deklaracje zmiennych wprowadzanych przez uzytkownika
	
    double a,b,c,m;
    a=b=c=m=0.0;
	
	
	//deklaracje zmiennych wewnetrznych programu
		
    int n=1000;
    double moment,licznik,mianownik;
    moment=licznik=mianownik=0.0;


	//wczytywanie danych uzytkownika
	
    printf("Podaj parametr a prostej y=ax+b: ");
    scanf("%lf", &a);
    printf("Podaj parametr b prostej y=ax+b: ");
    scanf("%lf", &b);
    printf("Podaj parametr c prostej y=c: ");
    scanf("%lf", &c);
    printf("Podaj mase stozka m: ");
    scanf("%lf", &m);

	
	//wypisywanie danych uzytkownika dla potwierdzenia
	
	printf("Podane parametry to: a = ");
    printf("%lf",a);
    printf(", b = ");
    printf("%lf",b);
    printf(", c = ");
    printf("%lf",c);
    printf(", m = ");
	printf("%lf",m);

	
	//wywolanie liczenia calek i momentu
	
    licznik=calka(0, c, n, a, b, 4);
    mianownik=calka(0, c, n, a, b, 2);
    moment=(licznik * m)/(mianownik * 2);
	
	
	//wypisanie wyniku
	
	printf("\nMoment bezwladnosci stozka to: ");
    printf("%E", moment);
	
	
	getchar();
    return 0;
}
