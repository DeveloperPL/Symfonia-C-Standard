// Liczenie Podatku.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double twoj_dochod;
	int x;
	cout << "Podaj ile zarabiasz miesiecznie : ";
	cin >> twoj_dochod;

	if (twoj_dochod <= 1000) x = 1;
	if (twoj_dochod > 1000 && twoj_dochod <= 2000) x = 2;
	if (twoj_dochod > 2000 && twoj_dochod <= 4000) x = 3;
	if (twoj_dochod > 4000) x = 4;
	if (twoj_dochod < 0) x = 5;

	switch (x)
	{
	case 1:
		twoj_dochod = twoj_dochod * 0.18;
		break;
	case 2:
		twoj_dochod = twoj_dochod * 0.25;
		break;
	case 3:
		twoj_dochod = twoj_dochod * 0.32;
		break;
	case 4:
		twoj_dochod = twoj_dochod * 0.42;
		break;
	case 5:
		cout << "Ten program nie oblicza ujemnego dochodu!!!!!!!!!";
		break;
	}
	cout << "Twoj podatek wyniesie: " << twoj_dochod <<endl;




	return main();
	system("pause");
	return 0;
}


