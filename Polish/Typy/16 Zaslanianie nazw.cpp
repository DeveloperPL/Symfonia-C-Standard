// 16 Zaslanianie nazw.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int k = 33; // Zmienna globalna

int main()
{
	cout << "Jestem w main, k = " << k << endl;

	{
		int k = 10;
		cout << "Po lokalnej dfinicji k = " << k << endl;
		cout << "Sprawdzam zmienna glodalna k = " << ::k << endl;
	}
	cout << "Poza blokiem k = " << k << endl;


	system("pause");
	return 0;
}


