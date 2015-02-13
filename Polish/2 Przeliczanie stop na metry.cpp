// 2 Przeliczanie stop na metry.cpp: Określa punkt wejścia dla aplikacji konsoli.
//


/*Program na przeliczajacy wysokosci podanej
w stopach na wysokosc w metrach.
wczytywanie instukcji z klawiatury i wypisywanie na ekranie*/
#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	//----------PAMIETAJ!!!! w tym przypadku deinicja jest rownoczesnie deklaracja ale nie odwrotnie--------//
	int stopy;		//do przechowywania danej wejsciowej (DEFINICJA zmiennej)
	double metry;	//do przypisywania wyniku (DEFINICJA zmiennej)
	double przelicznik = 0.3; //przelicznik stop na metry

	cout << "Podaj wysokosc w stopach: ";
	cin >> stopy;					//przyjecie danej z klawiatury
	metry = stopy  * przelicznik;	//wlasciwe przeliczenie
	
	cout << "\n";	//to samo co cout << end;
	
	
	//----------WYPISYWANIE WYNIKOW--------------------//

	cout << stopy << " stop to jest: " << metry << " metrow\n";




	system("pause");
	return 0;
	
}


