#include<iostream>
#include<conio.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	char key;
	do
	{
		key = _getch();
		if (key == 119)cout << "������\n";
		else
			if (key == 115)cout << "�����\n";
			else
				if (key == 97)cout << "�����\n";
				else
					if (key == 100)cout << "������\n";
					else
						if (key == 13)cout << "�����\n";
						else
							if (key == 32)cout << "������\n";
						
			
		//cout << (int)key << "\t" << key << endl;
	} while (key != 27);
}