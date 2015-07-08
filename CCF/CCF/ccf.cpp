#include "ccf.h"

//世界上有10种人，一种懂二进制，一种不懂。那么你知道两个int32整数m和n的二进制表达，有多少个位(bit)不同么？
//输入例子: 1999 2299	输出例子 : 7
int Binary()
{
	int a = 0, b = 0, c;
	int i, j = 0;

	scanf_s("%d%d", &a, &b);
	getchar();
	c = a^b;
	printf("%d\n", c);
	for (i = 0; c != 0; i++)
	{
		if (c % 2 == 1)
			j++;
		c = c / 2;
	}
	printf("%d\n", j);

	system("pause");
	return 0;
}