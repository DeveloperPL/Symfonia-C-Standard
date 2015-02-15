// Funkcja dodawanie.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int dodaj(int a, int b);

int main()
{
	int x;
	int y;
	cout << "Podaj x: " << endl;
	cin >> x;
	cout << "Podaj y: " << endl;
	cin >> y;
	cout << "Suma licz wynosi: " << dodaj(x, y) << endl;

	system("pause");
	return 0;
}

int dodaj(int a, int b)
{
	int suma;
	suma = a + b;
	return suma;
}


