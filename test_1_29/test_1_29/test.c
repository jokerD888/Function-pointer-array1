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
void Calc(int (*pf)(int, int))//�ص�����,��������
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
	int(*p)[10] = &arr;//ȡ������ĵ�ַ

	int (*pf)(int, int);//����ָ��
	int (*pfArr[4])(int, int);//pfArr��һ�����顪����ָ�������

	int (*(*ppfArr)[4])(int, int);//ppfArr��һ��ָ����ָ�������ָ��
	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
	return 0;
}