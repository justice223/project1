//#include<stdio.h>   包含一个叫studio.h的文件
//int main()          主函数 程序的入口 main的函数有且只有一个
//{
//printf("徐梓涵我爱你\n徐梓涵是sb");
//printf("wdjowdowjd");

//#include<stdio.h>
//int main()
//{
//char ch = 'AAAA'; //char-字符数据类型
//	printf("ch=%c\n",ch);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRECT
//};
//
//int main()
//{
//	enum sex ch = MALE;
//	printf("=%c\n",ch);
//}

#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";//"abc"--'a','b','c','\0--'\0'字符串的结束标志
//	char arr2[] = { 'a','b','c',0};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

int main()
{
	printf("%c\n",'\32');// \ddd--ddd表示1~3个八进制的数字，表示一个字符
	printf("%c\n", '\x30');// \xdd--dd表示2个十六进制数字
	return 0;
}


