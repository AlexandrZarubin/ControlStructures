#include<iostream>
using namespace std;


void main()
{
	int b = 6 << 2;
	cout <<b ;
	cout << endl;
	int a = 48 >> 3;
	cout << a;
#ifdef DEBUG
	setlocale(LC_ALL, "rus");
	int n;//определяет размер как одной клетки, так и всей доски
	cout << "Введите размер доски:"; cin >> n;
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			//cout << (i/n%2==j/n%2?"* ":"  ");
			cout << (i / n & 1 ^ j / n & 1 ? "* " : "  ");
		}
		cout << endl;
	}
#endif // DEBUG


}