#include<stdio.h>
#include<windows.h>
int main()
{	
	int a=1;
	while (1)
	{
		printf("现在是%d秒\n",a++);
		Sleep(1000);
	}
	system("pause");
	return 0;
}
