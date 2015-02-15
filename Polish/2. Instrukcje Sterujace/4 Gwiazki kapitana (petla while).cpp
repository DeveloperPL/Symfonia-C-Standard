// 7 Gwiazki kapitana (petla while).cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
{

	int ile;
	cout << "Ile gwiazdek ma miec kapitan? :";
	cin >> ile;
	cout << "\nNo to narysuje wszystkie" << ile << " : ";

	//-----------Petla while rysujaca gwiazdki------------///
	while (ile)
	{
		cout << "*";
		ile = ile - 1;
	}

	cout << "\n Teraz zmienna ile ma wartosc" << ile << endl;



	return main();
	system("pause");
	return 0;
}


