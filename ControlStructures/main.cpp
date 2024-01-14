#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Hello controls" << endl;
	int temparuture;
	cout << "Введите температуру воздуха "; cin >> temparuture;
	/*if(temparuture>0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}*/

	if(temparuture>60)
	{
		cout << "вы на другой планете " << endl;
	}
	else if(temparuture>35)
	{
		cout << "Очень жарко " << endl;
	}
	else if (temparuture > 25)
	{
		cout << "жарко " << endl;
	}
	else if (temparuture > 15)
	{
		cout << "Тепло " << endl;
	}
	else if (temparuture > 0)
	{
		cout << "Прохладно " << endl;
	}
	else if (temparuture > -10)
	{
		cout << "Мороз " << endl;
	}
	else if (temparuture > -40)
	{
		cout << " Сильный Мороз " << endl;
	}
}