#include <stdio.h>
#include <math.h>


// Funkcja calka wykorzystuje metode numerycznego calkowania metoda prostokatow.
// parametr xp dolna granica calkowania
// parametr xk gorna granica calkowania
// parametr n liczba prostokatow
// parametr a wspolczynnik kierunkowy prostej 
// parametr b wyraz wolny
// parametr potega
// funkcja zwraca wartosc calki wykorzystanej w liczniku - dla potegi = 4 lub mianowniku - dla potegi = 2 wzoru na moment bezwladnosci stozka.

double calka(double xp, double xk, int n, double a, double b, double potega)
{

	// deklaracje zmiennych: suma, iterator

    double Sx = 0.0;
    int i;

	//petla sumujaca skladniki od i=1 do i=n

    for(i=1;i<=n;i++)
    {
        Sx+=pow(((a*(xp+((double)i*(xk-xp)/(double)n)))+b), potega);
    }
	
	// przemnozenie wyniku dzialania petli przez wyraz stojacy przed suma we wzorze

    Sx*=((xk-xp)/(double)n);
    return Sx;
}

// Program oblicza wartosc momentu bezwladnosci stozka powstalego poprzez obrot prostej y = ax + b ograniczonej prosta y = c wokol osi x.

int main()
{
	
	// deklaracje zmiennych wprowadzanych przez uzytkownika
	
    double a,b,c,m;
	int n;
	
	// deklaracje zmiennej wewnetrznej programu
	
    double moment;

	// wczytywanie danych uzytkownika
	
	printf("Podaj liczbe prostokatow n:\n");
    scanf("%d", &n);
    printf("Podaj parametr a prostej y=ax+b:\n");
    scanf("%lf", &a);
    printf("Podaj parametr b prostej y=ax+b:\n");
    scanf("%lf", &b);
    printf("Podaj parametr c prostej y=c:\n");
    scanf("%lf", &c);
    printf("Podaj mase stozka m:\n");
    scanf("%lf", &m);
	
	// wypisywanie danych uzytkownika dla potwierdzenia
	
	printf("\nPodane parametry to:\nn = %d, a = %lf, b = %lf, c = %lf, m = %lf", n, a, b, c, m);

	
	// wywolanie liczenia calek i momentu
	
	moment=(calka(0, c, n, a, b, 4) * m)/(calka(0, c, n, a, b, 2) * 2);
	
	// wypisanie wyniku
	
	printf("\n\nMoment bezwladnosci stozka to: %E", moment);
	
	return 0;
}