#include "ccf.h"

int main()
{
	int n, i, j;
	scanf_s("%d", &n);
	getchar();

	int *Array = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &Array[i]);
	}
	getchar();

	int *ArrayFlag = (int *)malloc(sizeof(int)*n);
	int MoreFlag = -1, MoreVal;
	ArrayFlag[0] = 0;
	for (i = 0; i < n - 1; )
	{
		for (j = i + 1; j < n; j++)
		{
			if (Array[i] == Array[j])
				ArrayFlag[i] += 1;
		}
		if (ArrayFlag[i] >= MoreFlag)
		{
			MoreFlag = ArrayFlag[i];
			MoreVal = Array[i];
		}
		ArrayFlag[++i] = 0;
	}
	for (i = 0; i < n; i++)
		if (ArrayFlag[i] == MoreFlag && Array[i] < MoreVal)
			MoreVal = Array[i];
	printf("\n%d", MoreVal);

	system("pause");
	return 0;
}