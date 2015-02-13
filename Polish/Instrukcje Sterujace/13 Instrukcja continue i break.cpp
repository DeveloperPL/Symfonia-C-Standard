// Instrukcja continue i break.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Contiune \n";
	for (int k = 0; k < 12; k = k + 1)
	{
		cout << "A";
		if (k > 1) continue;
		cout << "b\n";
	}
	cout << endl;
	cout << "\nTeraz z break\n";

	for (int k = 0; k < 12; k = k + 1)
	{
		cout << "A";
		if (k > 1) break;
		cout << "b\n";
	}
	cout << endl;


	system("pause");
	return 0;
}


