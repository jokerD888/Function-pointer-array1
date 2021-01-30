#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("**********************************\n");
	printf("***** 1.add   2.sub  *************\n");
	printf("***** 3.mul   4.div  *************\n");
	printf("******5.xor   0.exit *************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
void Calc(int (*pf)(int, int))//回调函数,避免冗余
{
	int x = 0;
	int y = 0;
	printf("Please enter two number:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}
//int main(void)
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("Please select:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("Quit!\n");
//			break;
//		default:
//			printf("Input error!\n");
//		}
//	} while (input);
//	return 0;
//}

int main(void)
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//取出数组的地址

	int (*pf)(int, int);//函数指针
	int (*pfArr[4])(int, int);//pfArr是一个数组—函数指针的数组

	int (*(*ppfArr)[4])(int, int);//ppfArr是一个指向函数指针数组的指针
	//ppfArr是一个数组指针，指针指向的数组有4个元素
	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
	return 0;
}