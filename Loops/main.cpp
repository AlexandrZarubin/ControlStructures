#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE
//#define FOR
//#define FACTORIAL
//#define TABL_UMN
void main()
{
	setlocale(LC_ALL, "");
#if defined WHILE_1
	int i = 0;	//счетчик цикла
	int n;		//количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (++i < n)
	{
		cout << i << " Hello" << endl;
		//i++;
	}
#endif
#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;
#endif

#ifdef DO_WHILE
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	}
	while (key!=27);
#endif

#ifdef FOR
	int n;
	cout << "Введите количество итераций "; cin >> n;
	for(int i=0;i<n;i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif
#ifdef FACTORIAL
	int n=0,f = 1;
	cout << "Введите количество итераций "; cin >> n;
	for(int i = 0; 
		i < n; 
		i++)
	{
		f = f * (i+1) ;
		cout << f<<endl;
	}
	//cout << f;
#endif

#ifdef TABL_UMN
	/*int n = 10;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout << i << "\t" << j <<"\t" << i * j << endl;
		}
		cout << endl;
	}*/
	int n = 10;
	for (int i = 1; i < n; i++)
	{
		cout << i << "\t";
		for (int j = 2; j <= n; j++)
		{
			cout <<  i * j << "\t";
		}
		cout << endl;
	}
#endif
	char symbol = 0;
	for (int i = 0; i <= 255; i++)
	{
		symbol = i;
		cout <<  i << " symbol " << symbol << endl;
	}

	


}

/*
--------------------------------
while - цикл с предусловием;
do...while - цикл с постусловием;
for - цикл на заданное число итераций;

Итерация - это однократное выполнение тела цикла.
Тело цикла - это код, который нужно зациклить (многократно выполнить)

--------------------------------
*/

/*while (condition)
{
	....;
	group-of-statements;
	....;
}*/

/*do
{
	....;
	group - of - statements;
	....;
} while (condition);*/