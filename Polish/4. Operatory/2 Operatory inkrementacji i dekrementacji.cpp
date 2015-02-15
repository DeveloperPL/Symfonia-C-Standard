// 19 Operatory Ikrementacji i dekrementacji.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 5;
	int b = 5;
	int c = 5;
	int d = 5;

	cout << "A oto wartosci poszczegolnych wyrazen \n" << "Nie mylic ze zmiennymi!!!!\n";

	cout << "++a = " << ++a << endl;
	cout << "b++ = " << b++ << endl;
	cout << "--c = " << --c << endl;
	cout << "d-- = " << d-- << endl;


	cout << "Po obliczeniu tych wyrazen, same zmienne maja wartosci:\n" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	system("pause");
	return 0;
}


