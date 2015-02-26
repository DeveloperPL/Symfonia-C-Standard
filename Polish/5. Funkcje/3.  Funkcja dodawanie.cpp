// funkcja dodawanie przypomnienie.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double dodawanie(double a, double b);

int main()
{
	double x, y;
	cout << "Podaj x: ";
	cin >> x;
	cout << endl << "Podaj y: ";
	cin >> y;
	cout << x << " + " << y << " = " << dodawanie(x, y) << endl;

	return main();
	system("pause");
	return 0;
}

double dodawanie(double a, double b)
{
	double dzialanie;
	dzialanie = a + b;
	return dzialanie;
}


