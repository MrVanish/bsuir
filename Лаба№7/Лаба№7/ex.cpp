#include <conio.h>
#include<iostream>
#include<math.h>
#include <tchar.h>
#include <ctime>
#include <iomanip>
#include <cstdio>
#include<string>
#include<cstdio>
#include<Windows.h>
#include<cstdlib>
#include<cstring>
#include<string.h>

using namespace std;



void osn1()
{
	string s;
	int s1;
	cout << "Введи строку с числами:";
	cin.ignore();
	getline(cin, s);
	int i, k = 0, l, j;
	l = s.length();
	int *a = new int[l];
	s += " ";
	s1 = 0;
	for (i = 0; i < l + 1; i++)
		if (s[i] == ' ')
		{
			k++;
			a[k] = s1;
			s1 = 0;
		}
		else
		{
			char x = s[i];
			s1 = s1 * 10 + (int)x - (int)'0';
		}
	for (i = 1; i < k; i++)
		for (j = i + 1; j <= k; j++)
			if (a[i] > a[j])
			{
				int x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
	cout << "Ваши числа в порядке возрастания: ";
	for (i = 1; i <= k; i++)
		cout << a[i] << " ";
	delete[] a;
	_getch();
}
void osn2()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.ignore();
	char str1[80];
	cout << "Введите строку:";
	gets_s(str1);
	int a = 0, b = 0;
	for (int i = 0; i < strlen(str1); i++)
	{
		if (str1[i] == 'А' || str1[i] == 'а' || str1[i] == 'Е' || str1[i] == 'е' || str1[i] == 'Ё' || str1[i] == 'ё' || str1[i] == 'И' || str1[i] == 'и' || str1[i] == 'О' || str1[i] == 'о' || str1[i] == 'У' || str1[i] == 'у' || str1[i] == 'Ы' || str1[i] == 'ы' || str1[i] == 'Э' || str1[i] == 'э' || str1[i] == 'Ю' || str1[i] == 'ю' || str1[i] == 'Я' || str1[i] == 'Я')
			a++;
		else
			b++;
	}
	if (a > b) cout << endl << "В строке больше гласных букв";
	else cout << endl << "В строке больше cогласных букв";
	_getch();
}
void osn3() 
{
	int i;
	cout << "Введите количество слов для проверки:";
	cin >> i;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (int v = 0; v < i; ++v)
	{
		string str, tmp;
		cout <<endl<< "Введите слово: ";
		cin >> str;
		tmp = str;
		reverse(str.begin(), str.end());
		if (str == tmp)
			cout << "Это слово симетрично";
		else
			cout << "Это слово не симетрично ";
	}
	_getch();
}
