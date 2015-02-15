// 22 Program zawierajacy funkcje kukulka.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int kukulka(int ile); // Deklaracja nazwy funkcji


//*******************************************************************
int main()
{
	int m = 20;
	int x;
	
	cout << "Zaczynamy " << endl;
	cout << "Podaj X" << endl;
	cin >> x;
	m = kukulka(x); //Wywolanie funkcji z argumentem m. funkcja zostanie wywolana x razy
	cout << endl << "Na koniec m = " << m << endl;


	system("pause");
	return 0;
}
//*******************************************************************

int kukulka(int ile) //Definicja funkcji
{
	for (int i = 0; i < ile; i++)
	{
		cout << "Ku! ";
	}
	return 77;
}

