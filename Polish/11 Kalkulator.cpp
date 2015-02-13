// kalkulator2.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int ktory;
	double a, b, c;

	cout << "Ktory program wybrac" << endl;
	cout << " Menu wyboru: " << endl;
	cout << "1. Dodawanie " << endl;
	cout << "2. Odejmowanie " << endl;
	cout << "3. Mnozenie " << endl;
	cout << "4. Dzielenie " << endl;
	cout << "5. Zamknij Program" << endl;

	cin >> ktory;
	switch (ktory)
	{
	case 1:
		cout << endl << "a+b=c";
		cout << endl << "podaj a " << endl;
		cin >> a;
		cout << endl << "podaj b" << endl;
		cin >> b;
		c = a + b;
		cout << "c = " << c << endl;
	   break;
	case 2:
		cout << endl << "a-b=c";
		cout << endl << "podaj a " << endl;
		cin >> a;
		cout << endl << "podaj b" << endl;
		cin >> b;
		c = a - b;
		cout << "c = " << c << endl;
	    break;
	case 3:
		cout << endl << "a*b=c";
		cout << endl << "podaj a " << endl;
		cin >> a;
		cout << endl << "podaj b" << endl;
		cin >> b;
		c = a * b;
		cout << "c = " << c << endl;
		break;
	case 4:
		cout << endl << "a/b=c";
		cout << endl << "podaj a " << endl;
		cin >> a;
		cout << endl << "podaj b" << endl;
		cin >> b;
		c = a / b;
		cout << "c = " << c << endl;
		break;
	case 5:
		return 0;
		break;
	default:
		cout << "Zadales nr " << ktory << " - nie ma takiego numeru!!!!\n";
		break;

	}



	return main();
	system("pause");
	
}
