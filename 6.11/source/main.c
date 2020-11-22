#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[100];
	int a,i, j, n, temp;

	printf("請輸入陣列大小:");
	scanf_s("%d", &n);
	printf("請輸入數字\n");
	for (a = 0; a < n; a++)
	{
		printf("第%d個數字:", a + 1);
		scanf_s("%d", &arr[a]);
	}
	for (a = 0; a < n; a++)
	{
		printf("%d ", arr[a]);
	}
	printf("\n");
	for (i = n - 1 ; i >= 0; i--)
	{
		for (j = 0; j <= i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				for ( a = 0; a < n; a++)
				{
					printf("%d ", arr[a]);
				}
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}


