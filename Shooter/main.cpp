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
		if (key == 119)cout << "вперед\n";
		else
			if (key == 115)cout << "назад\n";
			else
				if (key == 97)cout << "влево\n";
				else
					if (key == 100)cout << "вправо\n";
					else
						if (key == 13)cout << "огонь\n";
						else
							if (key == 32)cout << "прыжок\n";
						
			
		//cout << (int)key << "\t" << key << endl;
	} while (key != 27);
}