#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Hello controls" << endl;
	int temparuture;
	cout << "������� ����������� ������� "; cin >> temparuture;
	/*if(temparuture>0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}*/

	if(temparuture>60)
	{
		cout << "�� �� ������ ������� " << endl;
	}
	else if(temparuture>35)
	{
		cout << "����� ����� " << endl;
	}
	else if (temparuture > 25)
	{
		cout << "����� " << endl;
	}
	else if (temparuture > 15)
	{
		cout << "����� " << endl;
	}
	else if (temparuture > 0)
	{
		cout << "��������� " << endl;
	}
	else if (temparuture > -10)
	{
		cout << "����� " << endl;
	}
	else if (temparuture > -40)
	{
		cout << " ������� ����� " << endl;
	}
}