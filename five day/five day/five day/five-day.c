#include<stdio.h>
#include"add.h"//自己定义的函数，用""括起来就行。
int my_strlen(char* str)//用递归来求字符长度。
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//要加return才有返回值；
	else
		return 0;

}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len = %d",len);

	return 0;
}//字符长度为3.

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