#include<iostream>
#include <cmath>
//#define ASCII
#define PrimeNumbers
//#define DEGREE
//#define FIBONACCI //�� ������� ��������
//#define FIBONACCI1  //�� ���������� �������� � ���������
//#define FIBONACCI2  //�������� �� ������
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

#ifdef ASCII
	char Symbol = ' ';
	for (int i = 0; i <= 255; i++)
	{
		Symbol = i;
		cout << i<<"\t" << Symbol << endl;
	}
	
#endif // ASCII

#ifdef PrimeNumbers
	/*cout << "������� �������� ����� ��� ������ ������� �����" << endl;
		int NumberA = 1, NumberB = 100;
		/cout << "������� ��������� �������� "; cin >> NumberA;
		/cout << endl;
		cout << "������� �������� �������� "; cin >> NumberB;
		cout << endl;*/
		int n;
		cout << "������� ���������� �����"; cin >> n;
		for (int i = 0; i <= n; i++)
		{
			bool simple = true;
			for (int j = 2; j < sqrt(i); j++)
			{
				if (i % j == 0)
				{
					simple = false; break;
				}
				
			}
				if (simple)cout << i << "\t";
		}
		//bool Simple = true;
		//for (NumberA; NumberA <= NumberB; NumberA++)
		//{
		//	Simple = true;

		//	//�������������� ������ sqrt(Number) ������ 16=4 ����� 2 ��������
		//	//������ 11 3.3... ����� 3 �������� ������� (sqrt(A)=x == x^2=A) � �� 3,3 ������� ����� ������� �����
		//	//for (int i = 2; i <= sqrt(NumberA); i++)
		//	for (int i = 2; i < NumberA; i++)
		//	{
		//		if (NumberA == 5)continue;
		//		if (!(NumberA % i))
		//		{
		//			Simple = false;
		//			break;
		//		}
		//		 
		//	}
		//	if (Simple)cout << NumberA << " ";
		//}
#endif // PrimeNumbers

#ifdef DEGREE
		cout << "��������� �������� � �������" << endl;
		double Base = 2;
		double Degree = 4;
		int Result;
		//cout << "������� ��������� "; cin >> Base;
		//cout << "������� ������� "; cin >> Degree;
		Result = Base;
		if (Degree < 0)
		{
			Base = 1 / Base;

		}
		for (int i = 1; i < Degree; i++)
		{
			Result *= Base;
		}
		cout << Base << "^" << Degree << "=" << Result;
		
		
		// //������� ������
		//Result = pow(Base, Degree);
		//cout << Base << "^" << Degree << "=" << Result;
		
#endif // Degree

#ifdef FIBONACCI
		int StartIteration = 0, EndIteration = 10;
		int NumberA = 0, NumberB = 1, NumberResult = 0;
		//cout << "������� ������� �������� �������"; cin >> EndIteration;
		for (int i = 0; i < EndIteration; i++)
		{
			cout << NumberResult << " ";
			NumberA = NumberB;
			NumberB = NumberResult;
			NumberResult = NumberA + NumberB;
		}

#endif // FIBONACCI

#ifdef FIBONACCI1

		int StartIteration = 4, EndIteration = 10;
		int NumberA = 0, NumberB = 1, NumberResult = 0;
		//cout << "������� �������� ������"; cin >> StartIteration;
		//cout << "������� �������� �����"; cin >> EndIteration;
		for (int i = 0; i < StartIteration-1; i++)
		{
			//cout << NumberResult << " ";
			NumberA = NumberB;
			NumberB = NumberResult;
			NumberResult = NumberA + NumberB;
		}

		for (; StartIteration < EndIteration; StartIteration++)
		{
			cout << NumberResult << " ";
			NumberA = NumberB;
			NumberB = NumberResult;
			NumberResult = NumberA + NumberB;
		}


#endif // FIBONACCI1

#ifdef FIBONACCI2
		int StartIteration = 10, EndIteration = 1000;
		int NumberA = 0, NumberB = 1, NumberResult = 0;
		//cout << "������� �������� ������ �����"; cin >> StartIteration;
		//cout << "������� �������� ����� �����"; cin >> EndIteration;
		for (int i = 0; NumberResult <= EndIteration; i++)
		{
			if (NumberResult >= StartIteration && NumberResult <= EndIteration)
			{
				cout << NumberResult << " ";
			}
			NumberA = NumberB;
			NumberB = NumberResult;
			NumberResult = NumberA + NumberB;
		}
#endif // FIBONACCI2

}
