// Funkcja mnozenia.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int mnozenie(int a, int b);


int main()
{
	int x, y;
	cout << "Podaj x" << endl;
	cin >> x;
	cout << "Poraj y" << endl;
	cin >> y;
	cout << "x * y = " << mnozenie(x, y) << endl;

	system("pause");
	return 0;
}

int mnozenie(int a, int b)
{
	int dzialanie;
	dzialanie = a * b;
	return dzialanie;

}


