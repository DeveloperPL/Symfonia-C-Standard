// 5 Punkty kare i wysokosc lotu.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int wysokosc, punkty_karne; //to samo co int wysokosc; int punkty_karene;
	cout << "Na jakiej wysokosci lecimy (podaj w metrach): ";
	cin >> wysokosc;

	/*-------Rozwazamy sytuacje-----------*/
	if (wysokosc < 500)
	{
		cout << endl << wysokosc << " metrow to za nisko!!!!\n";
		punkty_karne = 1;

	}

	else
	{
		cout << endl << "Na wysokosci " << wysokosc << " metrow jestes juz bezpieczny\n";
		punkty_karne = 0;

	}
	
	//-----------Ocena wynikow------------//
	cout << "\nMasz " << punkty_karne << " Punktow karnych\n";
		if (punkty_karne) cout <<  "\nPopraw sie!!!!\n";
		return main();
	system("pause");
	return 0;
}


