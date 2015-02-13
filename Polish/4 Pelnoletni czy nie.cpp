// 4 Pelnoletni czy nie.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	bool pelnoletni;

	cout << "Podaj swoj wiek: ";
	cin >> x;
	
	cout << "\nPodano wiek: " << x << endl;

	if (x >= 18)
		cout << "\nTa osoba jest pelnoletnia\n";
	else
		cout << "\nTa osoba jest niepelnoletnia\n";
	


	system("pause");
	return 0;
}


