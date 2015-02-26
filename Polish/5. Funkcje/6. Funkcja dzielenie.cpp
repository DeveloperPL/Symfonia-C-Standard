// 6. Funkcja dzielenia.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double dzielenie(double a, double b);

int main()
{
	double x, y;
	cout << "Podaj x: " << endl;
	cin >> x;
	cout << endl << "Podaj y: " << endl;
	cin >> y;
	cout << endl << "x/y = " << dzielenie(x, y) << endl;
	
	system("pause");
	return 0;
}

double dzielenie(double a, double b)
{
	double dzialanie;
	dzialanie = a / b;
	return dzialanie;

}
