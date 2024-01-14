#include<iostream>
#include <cmath>
//#define ASCII
#define PrimeNumbers
//#define DEGREE
//#define FIBONACCI //до заданой итераций
//#define FIBONACCI1  //на количество итераций в диапазоне
//#define FIBONACCI2  //диапазон по числам
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
	/*cout << "Введите деапозон чисел для вывода простых числе" << endl;
		int NumberA = 1, NumberB = 100;
		/cout << "Введите начальный диапозон "; cin >> NumberA;
		/cout << endl;
		cout << "Введите Конечный диапозон "; cin >> NumberB;
		cout << endl;*/
		int n;
		cout << "Введите предельное число"; cin >> n;
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

		//	//оптимизировать монжно sqrt(Number) корень 16=4 всего 2 проверки
		//	//корень 11 3.3... всего 3 проверки формула (sqrt(A)=x == x^2=A) а из 3,3 остаток будет дробная часть
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
		cout << "Программа возводит в степень" << endl;
		double Base = 2;
		double Degree = 4;
		int Result;
		//cout << "Введите основание "; cin >> Base;
		//cout << "Введите степень "; cin >> Degree;
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
		
		
		// //Краткая запись
		//Result = pow(Base, Degree);
		//cout << Base << "^" << Degree << "=" << Result;
		
#endif // Degree

#ifdef FIBONACCI
		int StartIteration = 0, EndIteration = 10;
		int NumberA = 0, NumberB = 1, NumberResult = 0;
		//cout << "Введите сколько итераций сделать"; cin >> EndIteration;
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
		//cout << "Введите диапазон начала"; cin >> StartIteration;
		//cout << "Введите диапазон конца"; cin >> EndIteration;
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
		//cout << "Введите диапазон начала чисел"; cin >> StartIteration;
		//cout << "Введите диапазон конца чисел"; cin >> EndIteration;
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
