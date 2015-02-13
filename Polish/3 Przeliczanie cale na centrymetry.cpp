// 3 Przeliczanie cale na centrymetry.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	//DEKLARACJA MOWI O TYM JAKIEGO TYPU JEST OBIEKT

	double cale;
	double centymetry;
	double przelicznik = 2.54;

	cout << "Podaj wartosc w calach: ";
	cin >> cale; //wpisujemy cale

	//-------liczymy-------/
	centymetry = cale * przelicznik;

	//------wypisujemy wynik ----/
	cout << cale << " cali to: " << centymetry << " centrymetrow" << endl;



	system("pause");
	return 0;
}


