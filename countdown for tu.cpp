#include <iostream>
#include <windows.h>
//#include <cstdlib>
using namespace std;
int days = 0;
int hours = 1;
int mintues = 10;
int seconds = 0;
void printMenu()
{
	cout << "土家风味小馆即将成立22周" << endl;
	cout << endl;
}

void CountDown_Seconds(int& Days, int& Hours, int& Mintues, int& Seconds)//引用
{
	for (; Seconds >= 0; Seconds--)
	{
		cout << "倒计时" << Days << "天" << Hours << "小时" << Mintues << "分" << Seconds << "秒" << endl;//Seconds的S没有大写
		Sleep(1000);//后Sleep可以看清楚时间
		system("cls");
	}
}
void CountDown_Mintues(int& Days, int& Hours, int& Mintues, int& Seconds)//引用
{
	for (; Mintues >= 0; Mintues--)//<=改成>=
	{
		CountDown_Seconds(Days, Hours, Mintues, Seconds);
		Seconds = 59; //这个改成59
	}
}
void CountDown_Hours(int& Days, int& Hours, int& Mintues, int& Seconds)//引用
{
	for (; Hours >= 0; Hours--)//<=改成>=
	{
		CountDown_Mintues(Days, Hours, Mintues, Seconds);
		Mintues = 59;//这个改成59
	}
}
void CountDown(int Days, int Hours, int Mintues, int Seconds)
{
	for (; Days >= 0; Days--)//<=改成>=
	{
		CountDown_Hours(Days, Hours, Mintues, Seconds);
		Hours = 23; //这个改成23
	}
}
int main()
{
	int i = 1;
	int set;
	printMenu();
	while (i <= 3)
	{
		cout << "请输入1并在12:00准时按下回车" << endl;
		cin >> set;
		if (set)
		{
			break;
		}
		i++;
	}
	CountDown(days, hours, mintues, seconds);
	cout << "土家风味小馆正式成立22周！" << endl;
	//system("pause");
	return 0;
}