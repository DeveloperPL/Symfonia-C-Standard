// 11 Zagniezdzone petle for.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	int i, m;
	int zakoncz = 3;

	for (i = 0; i < 4; i = i + 1)
	{
		for (m = 0; m < 10; m = m + 1)
		{
			cout << "*";
			if (m > zakoncz)
				break;
		}
		cout << "\nKontynuujemy zewnetrzna pentle" << " for dla i = " << i << endl;
	}

	
	system("pause");
	return 0;
}


