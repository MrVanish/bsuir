#include "Header.h"
#include <conio.h>
#include<iostream>
#include<math.h>
#include <tchar.h>
#include <ctime>
#include <iomanip>
#include<string>
#include<cstring>
#include<string.h>

using namespace std;

int main()
{
	int v;
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер задания:";
	cin >> v;
	switch (v)
	{
	case 1: osn1(); break;
	case 2: osn2(); break;
	case 3: osn3(); break;
	default: cout << "Некорректный ввод" << endl;
		break;
	}
	return 0;
}