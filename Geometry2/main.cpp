#include<iostream>
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define CHESS_LITE
#define CHESS_HARD
#define PASCAL_TRIANGLE
//#define RHOMBUS
#define CHESS_PROBA
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int n=5;
	//cout << "������� ������ ������: "; cin >> n;
#ifdef SQUARE
for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE
cout << endl;
#ifdef TRIANGLE_1
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= i; j++)
	{
		cout << "* ";
	}
	cout << endl;
}
cout << endl;
#endif //TRIANGLE_1


#ifdef TRIANGLE_2 //TRIANGLE_2
for (int i = 0; i < n; i++)
{
	for (int j = i; j < n; j++)
	{
		cout << "* ";
	}
	cout << endl;
}
cout << endl;
#endif //TRIANGLE_2

#ifdef TRIANGLE_3
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < i; j++)cout << "  ";
	for (int j = i; j < n; j++)cout << "* ";
	cout << endl;
}
cout << endl;
#endif //TRIANGLE_3

#ifdef TRIANGLE_4 //TRIANGLE_4
for (int i = 0; i <= n; i++)
{
	for (int j = i; j < n; j++)cout << "  ";
	for (int j = 0; j < i; j++)cout << "* ";
	
	cout << endl;
}
cout << endl;
#endif //TRIANGLE_4

#ifdef CHESS_LITE
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		/*if ((i + j) % 2 == 0)cout << "+ ";
		else cout << "- ";*/
		//i % 2 == j % 2?cout << "+ ":cout << "- ";
		cout << (i % 2 == j % 2?"+ ":"- ");
	}
	cout << endl;
}
#endif //CHESS_LITE
cout << endl;
#ifdef CHESS_HARD
//int n = 5;
//n = 8;
for (int f = 0; f < n; f++)
{
	for (int d = 0; d < n; d++)
	{
		for (int i = 0; i < n; i++)
		{
			if (!((i + f) % 2))
			{
				for (int j = 0; j < n; j++)
				{
					cout << "# ";
				}
			}
			else
			{
				for (int k = 0; k < n; k++)
				{
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
	cout << endl;
}
#endif //CHESS_HARD

#ifdef PASCAL_TRIANGLE
//int n = 8;
n = 8;
unsigned long long row = 1;
//������� "n!/(m!(n-m)!)" ��� � ���� ������� "row! / (col! * (row-col ��� i-j)!)"
for (int i = 0; i < n; i++)//fatorial stroki
{
	if (i > 0)row *= i;//factorial stroki
	else row = 1;
	unsigned long long col = 1;
	unsigned long long fac = 1;
	//for (int k = 1; k < (8 - i + 1); k++)cout << "  ";//��� ������������ 
	for (int j = 0; j <= i; j++)//factorial stolbika
	{
		if (j > 0)col *= j;//factorial stolbik
		else col = 1;
		for (int k = 0; k <= i - j; k++)//facttial row-col
		{
			if (k > 0)fac *= k;
			else fac = 1;
		}
		//if (n / (m * res2) < 9)cout << n / (m * res2) << "  ";// ������������ 
		//else cout << n / (m * res2) << " ";//������������
		cout << row / (col * fac) << " ";
	}
	cout << endl;
}
#endif // PASCAL_TRIANGLE

cout << endl;

#ifdef RHOMBUS
//����� ��� ������� ��� �� ������ �����
n = 8;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		if (i + j == (n - 1) / 2) cout << "/";//�������� ��������� ����
		else
			if (i + n / 2 == j) cout << "\\"; // �������� ��������� ����
			else
				if (i - n / 2 == j) cout << "\\"; //�������� ��������� ���
				else
					if (i + j - n / 2 == n - 1)cout << "/";//�������� ��������� ���
					else cout << " ";
	}
	cout << endl;
}
cout << endl;
#endif // RHOMBUS


#ifdef CHESS_PROBA
//int n = 5;
setlocale(LC_ALL, "Russian_Russia.20866");
n = 5;
char Symbol141 = 141, Symbol128 = 128, Symbol129 = 129, Symbol130 = 130, Symbol131 = 131, Symbol132 = 132, Symbol133 = 133;

for (int f = 0; f < n; f++)
{

	for (int d = 0; d < n; d++)
	{

		for (int i = 0; i < n; i++)
		{

			if (!((i + f) % 2))
			{
				for (int j = 0; j < n * 2; j++)
				{
					if (i == 0 && d == 0 && f == 0 && j == 0)cout << Symbol130;//������� ����
					else if (i == n - 1 && d == 0 && f == 0 && j == n + 4)cout << Symbol131;//������� ������ ����
					else if (i == 0 && d == n && f == n - 1 && j == 0) cout << Symbol132;//������ ����� ����
					else if (i == n - 1 && d == n && f == n - 1 && j == n + 4) cout << Symbol133;//������ ������ ����
					else if (f == 0 && d == 0 || f == n - 1 && d == n)cout << Symbol128;
					else if (i == 0 && j == 0 || i == n - 1 && j == n + 4)cout << Symbol129;

					else cout << Symbol141;
				}
			}
			else
			{
				for (int k = 0; k < n * 2; k++)
				{
					if (i == 0 && d == 0 && f == 0 && k == 0)cout << Symbol130;//������� ����
					else if (i == n - 1 && d == 0 && f == 0 && k == n + 4)cout << Symbol131;//������� ������ ����
					else if (i == 0 && d == n && f == n - 1 && k == 0) cout << Symbol132;//������ ����� ����
					else if (i == n - 1 && d == n && f == n - 1 && k == n + 4) cout << Symbol133;//������ ������ ����
					else if (f == 0 && d == 0 || f == n - 1 && d == n)cout << Symbol128;
					else if (i == 0 && k == 0 || i == n - 1 && k == n + 4)cout << Symbol129;
					else cout << " ";
				}
			}
		}
		cout << endl;
	}
	//cout << endl;
}
#endif // CHESS_PROBA

}