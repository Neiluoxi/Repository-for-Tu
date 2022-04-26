#include<iostream>
using namespace std;
int main()
{
	cout << "该软件为上海市延安初级中学2020届特供版" << endl;
	int number = 1;
	cout << "请输入您的班级学号" << endl;
	cin>>number;
	if (number == 1434)
	{
		cout << "你没腹肌" << endl;
	}
	else
	{
		cout << "你有腹肌" << endl;
	}
	system("pause");
	return 0;
}
