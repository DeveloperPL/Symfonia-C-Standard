// funkcja odejmowanie.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int odejmij(int a, int b);

int main()
{
	int x, y;
	cout << "Oto programa do odejmowania od siebie liczb" << endl;
	cout << "Podaj x: " << endl;
	cin >> x;
	cout << endl;
	cout << "Podaj y: " << endl;
	cin >> y;
	cout << "x-b = " << odejmij(x, y) << endl;

	system("pause");
	return 0;
}

int odejmij(int a, int b)
{
	int odejmowanie;
	odejmowanie = a - b;
	return odejmowanie;
}


