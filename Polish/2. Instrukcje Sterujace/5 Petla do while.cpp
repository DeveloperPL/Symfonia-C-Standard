// 8 Petla do while.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	char litera;
	do
	{
		cout << "Napisz jakas litere";
		cin >> litera;
		cout << "\nNapislaes litere:" << litera << endl;
	} while (litera != 'K');
	cout << "\nSkoro napisales K to konczymy!"<<endl;
	/*
	cout << "Napisz jakas litere";
	cin >> litera;
	while (litera != 'K')
	{
		cout << "\nNapislaes litere: " << litera << endl;
		litera = litera + 1;
	}
	cout << "\nSkoro napisales K to konczymy!" << endl; */
	return main();
	system("pause");
	return 0;
}


