#include<iostream>
#include <iomanip>
#define CHESS //шахматка
//#define RHOMBUS //ромб
//#define CHESS_LITE
//#define NUMBER_ONE
//#define NUMBER_TWO
//#define NUMBER_TFREE
//#define NUMBER_FOUR
//#define NUMBER_FIVE
using namespace std;


void main()
{
#ifdef CHESS
int CounterT=0;
bool Condition = true, Chess1=true;
    do
    {
    /*if (Chess1)Chess1=false;
    else Chess1=true;*/
    for (int i = 0; i < 5; i++)
    {
        int CounterD = 0;
        /*if (Chess1)Condition =false;*/
        /*else Condition =true;*/
        do
        {
            if ((i + j) % 2) {
                for (int j = 0; j < 5; j++)
                {
                    cout << "# "; /*Condition = false;*/
                }
            }
            else
            {
                for (int k = 0; k < 5; k++)
                {
                    cout << "  "; /*Condition = true;*/
                }
            }
            CounterD++;
        } while (CounterD < 5);
        
        cout << endl;
    }
    CounterT++;
    } while (CounterT <5);
    cout <<endl;
#endif // CHESS 

#ifdef RHOMBUS
    int Size = 10;
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            if (i + j == (Size - 1) / 2) cout << "/";//главнвая диагональ верх
            else
                if (i + Size / 2 == j) cout << "\\"; // побочная диаганаль верх
                else
                    if (i - Size / 2 == j) cout << "\\"; //Побочная диаганаль низ
                    else
                        if (i  + j - Size / 2 == Size - 1)cout << "/";//главнвая диагональ низ
                        else cout << " ";
        }
        cout << endl;
    }
    cout <<endl;
#endif // RHOMBUS

#ifdef CHESS_LITE
    int Size1 = 5;
    bool Chess_Lite = true;
    for (int i = 0; i < Size1; i++)
    {
        for (int j = 0; j < Size1; j++)
        {
            if (Chess_Lite) { cout << "+ "; Chess_Lite = false; }
            else { cout << "- "; Chess_Lite = true;}
        }
        cout << endl;
    }
    cout <<endl;
#endif // CHESS_LITE

#ifdef NUMBER_ONE
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout <<endl;
#endif // NUMBER_ONE

#ifdef NUMBER_TWO
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout <<endl;
#endif // NUMBER_TWO

#ifdef NUMBER_TFREE
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout <<endl;
#endif // NUMBER_TFREE

#ifdef NUMBER_FOUR
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j >= i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;
#endif // NUMBER_FOUR

#ifdef NUMBER_FIVE
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 5; j >0; j--)
        {
            if (j <= i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
#endif // NUMBER_FIVE


}