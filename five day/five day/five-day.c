#include<stdio.h>
#include"add.h"//�Լ�����ĺ�������""���������С�
int my_strlen(char* str)//�õݹ������ַ����ȡ�
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//Ҫ��return���з���ֵ��
	else
		return 0;

}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len = %d",len);

	return 0;
}//�ַ�����Ϊ3.

//void print(int n)
//{
//	if (n> 9)
//	{
//		print(n/10);
//	}
//	printf(" %d",n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}//1 2 3 4

//int main()
//{
//	int a = 5;
//		int b = 2;
//		int sum = Add(a, b);
//			printf("%d",sum);
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = 2;
//	int sum = Add(a, b);
//		printf("%d",sum);
//	return 0;
//}


//int main()
//{
//	printf("%d",printf("%d", printf("45")));//4521
//	return 0;
//}