#include "ccf.h"

//��������10���ˣ�һ�ֶ������ƣ�һ�ֲ�������ô��֪������int32����m��n�Ķ����Ʊ��ж��ٸ�λ(bit)��ͬô��
//��������: 1999 2299	������� : 7
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