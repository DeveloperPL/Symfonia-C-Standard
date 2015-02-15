// 6 Sprawdzamy wiek(else if).cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	int wiek;
	int obliczanie_wieku;

	cout << endl << " Podaj w jakim wieku jestes: ";
	cin >> wiek;
	if (wiek <= 10)
		cout << endl << wiek << " lat Jestes jeszcze dzieckiem!";
	else if (wiek > 10 & wiek < 20)
		cout << endl << wiek << " lat Jestes nastolatkiem!";
	else if (wiek >= 20 & wiek < 150)
		cout << wiek << " lat Jestes juz dorosly!";
	else if (wiek >= 150)
		cout << wiek << " lat Nie masz prawa zyc!!!!";

	return main();
	system("pause");
	return 0;
}


